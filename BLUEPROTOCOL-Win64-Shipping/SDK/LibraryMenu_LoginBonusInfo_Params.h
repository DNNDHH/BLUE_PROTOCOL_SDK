#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetTextureData
	 */
	struct ULibraryMenu_LoginBonusInfo_C_SetTextureData_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetImageData
	 */
	struct ULibraryMenu_LoginBonusInfo_C_SetImageData_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetData
	 */
	struct ULibraryMenu_LoginBonusInfo_C_SetData_Params
	{
	public:
		struct FSBLoginBonusWindowData                             LoginBonusData;                                          // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
