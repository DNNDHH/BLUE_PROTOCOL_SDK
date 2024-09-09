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
	 * Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.IconMaskMode
	 */
	struct ULibraryMenu_Monster_ElementData_C_IconMaskMode_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Set Icon Data
	 */
	struct ULibraryMenu_Monster_ElementData_C_SetIconData_Params
	{
	public:
		TArray<int32_t>                                            VisibleIndexList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Offset;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.ResetIconVisibility
	 */
	struct ULibraryMenu_Monster_ElementData_C_ResetIconVisibility_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Init
	 */
	struct ULibraryMenu_Monster_ElementData_C_Init_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
