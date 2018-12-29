bits 64

section .data

global _data_start
global _data_end
global _data_size

_data_start: incbin "text.txt"
_data_end:
_data_size: dd $-_data_start