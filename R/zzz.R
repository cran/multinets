.onAttach <- function(libname, pkgname) {
  packageStartupMessage("multinets was developed by Neylson Crepalde as an extension to 'igraph'")
}

.onUnload <- function (libpath) {
  library.dynam.unload("multinets", libpath)
}
