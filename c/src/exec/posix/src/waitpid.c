/* 
 *  waitpid() - POSIX 1003.1 3.2.1
 *
 *  $Id$
 */

#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

int waitpid(
  pid_t pid,
  int *stat_loc,
  int options
)
{
  errno = ENOSYS;
  return -1;
}
