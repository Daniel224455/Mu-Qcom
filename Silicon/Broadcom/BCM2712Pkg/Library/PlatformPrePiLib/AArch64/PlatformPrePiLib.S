#include <AsmMacroIoLibV8.h>

ASM_FUNC (PlaformAssemblyInit)
  msr SPSel, #1

  ret
