/* Generated by ./xlat/gen.sh from ./xlat/sigprof_codes.in; do not edit. */

static const struct xlat sigprof_codes[] = {
#if defined(PROF_SIG) || (defined(HAVE_DECL_PROF_SIG) && HAVE_DECL_PROF_SIG)
	XLAT(PROF_SIG),
#endif
	XLAT_END
};
