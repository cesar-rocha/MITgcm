C $Header: /u/gcmpack/MITgcm/pkg/kpp/KPP.h,v 1.3 2000/09/13 17:07:10 heimbach Exp $

#ifdef ALLOW_KPP

C     /==========================================================\
C     | KPP.h                                                    |
C     | o Basic header for KPP vertical mixing parameterization. |
C     |   Contains all KPP field declarations.                   |
C     \==========================================================/

C-----------------------------------------------------------------------
C
C Time varying parameters computed by subroutine kpp_calc
C     KPPviscAz  - Vertical eddy viscosity coefficient                (m^2/s)
C     KPPdiffKzS - Vertical diffusion coefficient for salt and tracers(m^2/s)
C     KPPdiffKzT - Vertical diffusion coefficient for heat            (m^2/s)
C     KPPghat    - Nonlocal transport coefficient                     (s/m^2)
C     KPPhbl     - Mixing layer depth                                     (m)
C     KPPfrac    - Fraction of short-wave flux penetrating mixing layer
C
C-----------------------------------------------------------------------

      _RL KPPviscAz  (1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
      _RL KPPdiffKzS (1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
      _RL KPPdiffKzT (1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
      _RL KPPghat    (1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
      _RL KPPhbl     (1-OLx:sNx+OLx,1-OLy:sNy+OLy,   nSx,nSy)
      _RS KPPfrac    (1-OLx:sNx+OLx,1-OLy:sNy+OLy,   nSx,nSy)
      COMMON /kpp/ KPPviscAz, KPPdiffKzT, KPPdiffKzS
     &              , KPPghat, KPPhbl
      COMMON /kpp_short/ KPPfrac

#endif /* ALLOW_KPP */
