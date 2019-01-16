/*
 * file      : tests/basic/driver.c
 * copyright : Copyright (c) 2009-2019 Code Synthesis Tools CC
 * license   : LGPLv2.1; see accompanying COPYING file
 */

#include <stdio.h>

#include <mysql/mysql.h>

int
main ()
{
  if (mysql_library_init (0, NULL, NULL))
  {
    fprintf (stderr, "failed to initialize\n");
    return 1;
  }

  printf ("libmariadb version: %s\n", mysql_get_client_info ());
  mysql_library_end ();
  return 0;
}
