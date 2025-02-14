// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// ( $DISTANCEALPHA == 0 ) && ( $SOFTEDGES || $OUTLINE )
// $DISTANCEALPHA  && $DUALSEQUENCE
// $DISTANCEALPHA && ( $MAXLUMFRAMEBLEND2 || $MAXLUMFRAMEBLEND1 )
// ( $DUALSEQUENCE == 0 ) && ( $SEQUENCE_BLEND_MODE != 0 )
// $PACKED_INTERPOLATOR && ( $ANIMBLEND || $MAXLUMFRAMEBLEND1 || $EXTRACTGREENALPHA || $DUALSEQUENCE )
// defined $PIXELFOGTYPE && defined $WRITEWATERFOGTODESTALPHA && ( $PIXELFOGTYPE != 1 ) && $WRITEWATERFOGTODESTALPHA
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPTINT && $LIGHTING_PREVIEW && $FASTPATHENVMAPTINT
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPCONTRAST && $LIGHTING_PREVIEW && $FASTPATHENVMAPCONTRAST
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
// ($FLASHLIGHT || $FLASHLIGHTSHADOWS) && $LIGHTING_PREVIEW
#include "shaderlib/cshader.h"
class spritecard_ps20_Static_Index
{
private:
	int m_nDUALSEQUENCE;
#ifdef _DEBUG
	bool m_bDUALSEQUENCE;
#endif
public:
	void SetDUALSEQUENCE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDUALSEQUENCE = i;
#ifdef _DEBUG
		m_bDUALSEQUENCE = true;
#endif
	}
	void SetDUALSEQUENCE( bool i )
	{
		m_nDUALSEQUENCE = i ? 1 : 0;
#ifdef _DEBUG
		m_bDUALSEQUENCE = true;
#endif
	}
private:
	int m_nSEQUENCE_BLEND_MODE;
#ifdef _DEBUG
	bool m_bSEQUENCE_BLEND_MODE;
#endif
public:
	void SetSEQUENCE_BLEND_MODE( int i )
	{
		Assert( i >= 0 && i <= 2 );
		m_nSEQUENCE_BLEND_MODE = i;
#ifdef _DEBUG
		m_bSEQUENCE_BLEND_MODE = true;
#endif
	}
	void SetSEQUENCE_BLEND_MODE( bool i )
	{
		m_nSEQUENCE_BLEND_MODE = i ? 1 : 0;
#ifdef _DEBUG
		m_bSEQUENCE_BLEND_MODE = true;
#endif
	}
private:
	int m_nADDBASETEXTURE2;
#ifdef _DEBUG
	bool m_bADDBASETEXTURE2;
#endif
public:
	void SetADDBASETEXTURE2( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nADDBASETEXTURE2 = i;
#ifdef _DEBUG
		m_bADDBASETEXTURE2 = true;
#endif
	}
	void SetADDBASETEXTURE2( bool i )
	{
		m_nADDBASETEXTURE2 = i ? 1 : 0;
#ifdef _DEBUG
		m_bADDBASETEXTURE2 = true;
#endif
	}
private:
	int m_nMAXLUMFRAMEBLEND1;
#ifdef _DEBUG
	bool m_bMAXLUMFRAMEBLEND1;
#endif
public:
	void SetMAXLUMFRAMEBLEND1( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nMAXLUMFRAMEBLEND1 = i;
#ifdef _DEBUG
		m_bMAXLUMFRAMEBLEND1 = true;
#endif
	}
	void SetMAXLUMFRAMEBLEND1( bool i )
	{
		m_nMAXLUMFRAMEBLEND1 = i ? 1 : 0;
#ifdef _DEBUG
		m_bMAXLUMFRAMEBLEND1 = true;
#endif
	}
private:
	int m_nMAXLUMFRAMEBLEND2;
#ifdef _DEBUG
	bool m_bMAXLUMFRAMEBLEND2;
#endif
public:
	void SetMAXLUMFRAMEBLEND2( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nMAXLUMFRAMEBLEND2 = i;
#ifdef _DEBUG
		m_bMAXLUMFRAMEBLEND2 = true;
#endif
	}
	void SetMAXLUMFRAMEBLEND2( bool i )
	{
		m_nMAXLUMFRAMEBLEND2 = i ? 1 : 0;
#ifdef _DEBUG
		m_bMAXLUMFRAMEBLEND2 = true;
#endif
	}
private:
	int m_nEXTRACTGREENALPHA;
#ifdef _DEBUG
	bool m_bEXTRACTGREENALPHA;
#endif
public:
	void SetEXTRACTGREENALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nEXTRACTGREENALPHA = i;
#ifdef _DEBUG
		m_bEXTRACTGREENALPHA = true;
#endif
	}
	void SetEXTRACTGREENALPHA( bool i )
	{
		m_nEXTRACTGREENALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bEXTRACTGREENALPHA = true;
#endif
	}
private:
	int m_nCOLORRAMP;
#ifdef _DEBUG
	bool m_bCOLORRAMP;
#endif
public:
	void SetCOLORRAMP( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCOLORRAMP = i;
#ifdef _DEBUG
		m_bCOLORRAMP = true;
#endif
	}
	void SetCOLORRAMP( bool i )
	{
		m_nCOLORRAMP = i ? 1 : 0;
#ifdef _DEBUG
		m_bCOLORRAMP = true;
#endif
	}
private:
	int m_nANIMBLEND;
#ifdef _DEBUG
	bool m_bANIMBLEND;
#endif
public:
	void SetANIMBLEND( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nANIMBLEND = i;
#ifdef _DEBUG
		m_bANIMBLEND = true;
#endif
	}
	void SetANIMBLEND( bool i )
	{
		m_nANIMBLEND = i ? 1 : 0;
#ifdef _DEBUG
		m_bANIMBLEND = true;
#endif
	}
private:
	int m_nADDSELF;
#ifdef _DEBUG
	bool m_bADDSELF;
#endif
public:
	void SetADDSELF( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nADDSELF = i;
#ifdef _DEBUG
		m_bADDSELF = true;
#endif
	}
	void SetADDSELF( bool i )
	{
		m_nADDSELF = i ? 1 : 0;
#ifdef _DEBUG
		m_bADDSELF = true;
#endif
	}
private:
	int m_nMOD2X;
#ifdef _DEBUG
	bool m_bMOD2X;
#endif
public:
	void SetMOD2X( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nMOD2X = i;
#ifdef _DEBUG
		m_bMOD2X = true;
#endif
	}
	void SetMOD2X( bool i )
	{
		m_nMOD2X = i ? 1 : 0;
#ifdef _DEBUG
		m_bMOD2X = true;
#endif
	}
private:
	int m_nDEPTHBLEND;
#ifdef _DEBUG
	bool m_bDEPTHBLEND;
#endif
public:
	void SetDEPTHBLEND( int i )
	{
		Assert( i >= 0 && i <= 0 );
		m_nDEPTHBLEND = i;
#ifdef _DEBUG
		m_bDEPTHBLEND = true;
#endif
	}
	void SetDEPTHBLEND( bool i )
	{
		m_nDEPTHBLEND = i ? 1 : 0;
#ifdef _DEBUG
		m_bDEPTHBLEND = true;
#endif
	}
private:
	int m_nINVERSEDEPTHBLEND;
#ifdef _DEBUG
	bool m_bINVERSEDEPTHBLEND;
#endif
public:
	void SetINVERSEDEPTHBLEND( int i )
	{
		Assert( i >= 0 && i <= 0 );
		m_nINVERSEDEPTHBLEND = i;
#ifdef _DEBUG
		m_bINVERSEDEPTHBLEND = true;
#endif
	}
	void SetINVERSEDEPTHBLEND( bool i )
	{
		m_nINVERSEDEPTHBLEND = i ? 1 : 0;
#ifdef _DEBUG
		m_bINVERSEDEPTHBLEND = true;
#endif
	}
private:
	int m_nSHADER_SRGB_READ;
#ifdef _DEBUG
	bool m_bSHADER_SRGB_READ;
#endif
public:
	void SetSHADER_SRGB_READ( int i )
	{
		Assert( i >= 0 && i <= 0 );
		m_nSHADER_SRGB_READ = i;
#ifdef _DEBUG
		m_bSHADER_SRGB_READ = true;
#endif
	}
	void SetSHADER_SRGB_READ( bool i )
	{
		m_nSHADER_SRGB_READ = i ? 1 : 0;
#ifdef _DEBUG
		m_bSHADER_SRGB_READ = true;
#endif
	}
private:
	int m_nCOLOR_LERP_PS;
#ifdef _DEBUG
	bool m_bCOLOR_LERP_PS;
#endif
public:
	void SetCOLOR_LERP_PS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCOLOR_LERP_PS = i;
#ifdef _DEBUG
		m_bCOLOR_LERP_PS = true;
#endif
	}
	void SetCOLOR_LERP_PS( bool i )
	{
		m_nCOLOR_LERP_PS = i ? 1 : 0;
#ifdef _DEBUG
		m_bCOLOR_LERP_PS = true;
#endif
	}
private:
	int m_nPACKED_INTERPOLATOR;
#ifdef _DEBUG
	bool m_bPACKED_INTERPOLATOR;
#endif
public:
	void SetPACKED_INTERPOLATOR( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPACKED_INTERPOLATOR = i;
#ifdef _DEBUG
		m_bPACKED_INTERPOLATOR = true;
#endif
	}
	void SetPACKED_INTERPOLATOR( bool i )
	{
		m_nPACKED_INTERPOLATOR = i ? 1 : 0;
#ifdef _DEBUG
		m_bPACKED_INTERPOLATOR = true;
#endif
	}
private:
	int m_nDISTANCEALPHA;
#ifdef _DEBUG
	bool m_bDISTANCEALPHA;
#endif
public:
	void SetDISTANCEALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDISTANCEALPHA = i;
#ifdef _DEBUG
		m_bDISTANCEALPHA = true;
#endif
	}
	void SetDISTANCEALPHA( bool i )
	{
		m_nDISTANCEALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bDISTANCEALPHA = true;
#endif
	}
private:
	int m_nSOFTEDGES;
#ifdef _DEBUG
	bool m_bSOFTEDGES;
#endif
public:
	void SetSOFTEDGES( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSOFTEDGES = i;
#ifdef _DEBUG
		m_bSOFTEDGES = true;
#endif
	}
	void SetSOFTEDGES( bool i )
	{
		m_nSOFTEDGES = i ? 1 : 0;
#ifdef _DEBUG
		m_bSOFTEDGES = true;
#endif
	}
private:
	int m_nOUTLINE;
#ifdef _DEBUG
	bool m_bOUTLINE;
#endif
public:
	void SetOUTLINE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nOUTLINE = i;
#ifdef _DEBUG
		m_bOUTLINE = true;
#endif
	}
	void SetOUTLINE( bool i )
	{
		m_nOUTLINE = i ? 1 : 0;
#ifdef _DEBUG
		m_bOUTLINE = true;
#endif
	}
public:
	// CONSTRUCTOR
	spritecard_ps20_Static_Index( IShaderShadow *pShaderShadow, IMaterialVar **params )
	{
#ifdef _DEBUG
		m_bDUALSEQUENCE = false;
#endif // _DEBUG
		m_nDUALSEQUENCE = 0;
#ifdef _DEBUG
		m_bSEQUENCE_BLEND_MODE = false;
#endif // _DEBUG
		m_nSEQUENCE_BLEND_MODE = 0;
#ifdef _DEBUG
		m_bADDBASETEXTURE2 = false;
#endif // _DEBUG
		m_nADDBASETEXTURE2 = 0;
#ifdef _DEBUG
		m_bMAXLUMFRAMEBLEND1 = false;
#endif // _DEBUG
		m_nMAXLUMFRAMEBLEND1 = 0;
#ifdef _DEBUG
		m_bMAXLUMFRAMEBLEND2 = false;
#endif // _DEBUG
		m_nMAXLUMFRAMEBLEND2 = 0;
#ifdef _DEBUG
		m_bEXTRACTGREENALPHA = false;
#endif // _DEBUG
		m_nEXTRACTGREENALPHA = 0;
#ifdef _DEBUG
		m_bCOLORRAMP = false;
#endif // _DEBUG
		m_nCOLORRAMP = 0;
#ifdef _DEBUG
		m_bANIMBLEND = false;
#endif // _DEBUG
		m_nANIMBLEND = 0;
#ifdef _DEBUG
		m_bADDSELF = false;
#endif // _DEBUG
		m_nADDSELF = 0;
#ifdef _DEBUG
		m_bMOD2X = false;
#endif // _DEBUG
		m_nMOD2X = 0;
#ifdef _DEBUG
		m_bDEPTHBLEND = false;
#endif // _DEBUG
		m_nDEPTHBLEND = 0;
#ifdef _DEBUG
		m_bINVERSEDEPTHBLEND = false;
#endif // _DEBUG
		m_nINVERSEDEPTHBLEND = 0;
#ifdef _DEBUG
		m_bSHADER_SRGB_READ = false;
#endif // _DEBUG
		m_nSHADER_SRGB_READ = 0;
#ifdef _DEBUG
		m_bCOLOR_LERP_PS = false;
#endif // _DEBUG
		m_nCOLOR_LERP_PS = 0;
#ifdef _DEBUG
		m_bPACKED_INTERPOLATOR = false;
#endif // _DEBUG
		m_nPACKED_INTERPOLATOR = 0;
#ifdef _DEBUG
		m_bDISTANCEALPHA = false;
#endif // _DEBUG
		m_nDISTANCEALPHA = 0;
#ifdef _DEBUG
		m_bSOFTEDGES = false;
#endif // _DEBUG
		m_nSOFTEDGES = 0;
#ifdef _DEBUG
		m_bOUTLINE = false;
#endif // _DEBUG
		m_nOUTLINE = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bDUALSEQUENCE && m_bSEQUENCE_BLEND_MODE && m_bADDBASETEXTURE2 && m_bMAXLUMFRAMEBLEND1 && m_bMAXLUMFRAMEBLEND2 && m_bEXTRACTGREENALPHA && m_bCOLORRAMP && m_bANIMBLEND && m_bADDSELF && m_bMOD2X && m_bDEPTHBLEND && m_bINVERSEDEPTHBLEND && m_bSHADER_SRGB_READ && m_bCOLOR_LERP_PS && m_bPACKED_INTERPOLATOR && m_bDISTANCEALPHA && m_bSOFTEDGES && m_bOUTLINE;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nDUALSEQUENCE ) + ( 2 * m_nSEQUENCE_BLEND_MODE ) + ( 6 * m_nADDBASETEXTURE2 ) + ( 12 * m_nMAXLUMFRAMEBLEND1 ) + ( 24 * m_nMAXLUMFRAMEBLEND2 ) + ( 48 * m_nEXTRACTGREENALPHA ) + ( 96 * m_nCOLORRAMP ) + ( 192 * m_nANIMBLEND ) + ( 384 * m_nADDSELF ) + ( 768 * m_nMOD2X ) + ( 1536 * m_nDEPTHBLEND ) + ( 1536 * m_nINVERSEDEPTHBLEND ) + ( 1536 * m_nSHADER_SRGB_READ ) + ( 1536 * m_nCOLOR_LERP_PS ) + ( 3072 * m_nPACKED_INTERPOLATOR ) + ( 6144 * m_nDISTANCEALPHA ) + ( 12288 * m_nSOFTEDGES ) + ( 24576 * m_nOUTLINE ) + 0;
	}
};
#define shaderStaticTest_spritecard_ps20 psh_forgot_to_set_static_DUALSEQUENCE + psh_forgot_to_set_static_SEQUENCE_BLEND_MODE + psh_forgot_to_set_static_ADDBASETEXTURE2 + psh_forgot_to_set_static_MAXLUMFRAMEBLEND1 + psh_forgot_to_set_static_MAXLUMFRAMEBLEND2 + psh_forgot_to_set_static_EXTRACTGREENALPHA + psh_forgot_to_set_static_COLORRAMP + psh_forgot_to_set_static_ANIMBLEND + psh_forgot_to_set_static_ADDSELF + psh_forgot_to_set_static_MOD2X + psh_forgot_to_set_static_DEPTHBLEND + psh_forgot_to_set_static_INVERSEDEPTHBLEND + psh_forgot_to_set_static_SHADER_SRGB_READ + psh_forgot_to_set_static_COLOR_LERP_PS + psh_forgot_to_set_static_PACKED_INTERPOLATOR + psh_forgot_to_set_static_DISTANCEALPHA + psh_forgot_to_set_static_SOFTEDGES + psh_forgot_to_set_static_OUTLINE
class spritecard_ps20_Dynamic_Index
{
public:
	// CONSTRUCTOR
	spritecard_ps20_Dynamic_Index( IShaderDynamicAPI *pShaderAPI )
	{
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
#endif // _DEBUG
		return 0;
	}
};
#define shaderDynamicTest_spritecard_ps20 1
