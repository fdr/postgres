/*-------------------------------------------------------------------------
 *
 * collationcmds.h
 *	  prototypes for collationcmds.c.
 *
 *
 * Portions Copyright (c) 1996-2012, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/collationcmds.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef COLLATIONCMDS_H
#define COLLATIONCMDS_H

#include "nodes/parsenodes.h"

extern Oid DefineCollation(List *names, List *parameters);
extern Oid RenameCollation(List *name, const char *newname);
extern Oid AlterCollationNamespace(List *name, const char *newschema);
extern Oid	AlterCollationNamespace_oid(Oid collOid, Oid newNspOid);

#endif   /* COLLATIONCMDS_H */
