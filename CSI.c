#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CSI.h"

char *CSIed() {
  char *result = (char *)malloc(strlen(CSI) + strlen("2J") + 1);
  if (result == NULL)
    exit(1);
  if (sprintf(result, CSI "2J") < 0)
    exit(1);
  return result;
}

char *CSIcup(int x, int y) {
  char *cx;
  char *cy;
  if (sprintf(cx, "%d", x) < 0)
    exit(1);
  if (sprintf(cy, "%d", y) < 0)
    exit(1);

  char *result = (char *)malloc(strlen(CSI) + strlen(cx) + 1 + strlen(cy) + 2);
  if (sprintf(result, CSI "%d;%d""H",x, y) < 0)
    exit(1);
  return result;
}
