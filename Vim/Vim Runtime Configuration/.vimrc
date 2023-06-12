
" VIM WITH ALL ENHANCEMENTS "

source $VIMRUNTIME/vimrc_example.vim


" CUSTOMIZATION "

"" Set lines enumeration.
""" There is no enumeration if the feature is absent.
set number
"" Select a theme.
""" Schemes: desert, molokai, gruvbox, solarized, koehler, monokai, and jellybeans.
colorscheme koehler
"" Select font, size and characters features.
set guifont=Consolas:h18:cANSI
"" Show status bar.
""" 0: never show; 1: show only with multiple tabs; 2: always show.
set laststatus=2
"" Select a theme for status bar.
highlight StatusLine ctermfg=black
"" Customize the status bar.
""" Adding file name, conditional for read-only, lines, columns, and file percentage.
let &statusline=' %F    %{&readonly?"[RO]":""}%=%-9.(%l,%c%V%)%{line(".")*100/line("$")}%%  '
"" Avoid auto-completing of comments.
autocmd FileType * setlocal formatoptions-=c formatoptions-=r formatoptions-=o
"" Define tab size.
set tabstop=4


" BACKING UP FILE CHANGES "

"" Use the internal diff if available.
"" Otherwise use the special 'diffexpr' for Windows.
if &diffopt !~# 'internal'
  set diffexpr=MyDiff()
endif
function MyDiff()
  let opt = '-a --binary '
  if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif
  if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif
  let arg1 = v:fname_in
  if arg1 =~ ' ' | let arg1 = '"' . arg1 . '"' | endif
  let arg1 = substitute(arg1, '!', '\!', 'g')
  let arg2 = v:fname_new
  if arg2 =~ ' ' | let arg2 = '"' . arg2 . '"' | endif
  let arg2 = substitute(arg2, '!', '\!', 'g')
  let arg3 = v:fname_out
  if arg3 =~ ' ' | let arg3 = '"' . arg3 . '"' | endif
  let arg3 = substitute(arg3, '!', '\!', 'g')
  if $VIMRUNTIME =~ ' '
    if &sh =~ '\<cmd'
      if empty(&shellxquote)
        let l:shxq_sav = ''
        set shellxquote&
      endif
      let cmd = '"' . $VIMRUNTIME . '\diff"'
    else
      let cmd = substitute($VIMRUNTIME, ' ', '" ', '') . '\diff"'
    endif
  else
    let cmd = $VIMRUNTIME . '\diff'
  endif
  let cmd = substitute(cmd, '!', '\!', 'g')
  silent execute '!' . cmd . ' ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3
  if exists('l:shxq_sav')
    let &shellxquote=l:shxq_sav
  endif
endfunction
