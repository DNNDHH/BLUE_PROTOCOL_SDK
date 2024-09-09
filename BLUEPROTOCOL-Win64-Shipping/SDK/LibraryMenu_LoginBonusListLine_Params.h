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
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.GetWidget
	 */
	struct ULibraryMenu_LoginBonusListLine_C_GetWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MK5V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULibraryMenu_LoginBonusListLineItem_C*               Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Set Data
	 */
	struct ULibraryMenu_LoginBonusListLine_C_SetData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LN1U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBLoginBonusWindowDayData                          Data;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESlateVisibility                                           Visibility;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Stump;                                                   // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Click;                                                   // 0x0022(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F48V[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Initialize
	 */
	struct ULibraryMenu_LoginBonusListLine_C_Initialize_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Finish
	 */
	struct ULibraryMenu_LoginBonusListLine_C_Finish_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.OnIconClick
	 */
	struct ULibraryMenu_LoginBonusListLine_C_OnIconClick_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLine
	 */
	struct ULibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.IconClick__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
