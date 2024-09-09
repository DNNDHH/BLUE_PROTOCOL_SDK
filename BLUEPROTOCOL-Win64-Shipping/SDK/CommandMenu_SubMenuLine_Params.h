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
	 * Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.InAnimation
	 */
	struct UCommandMenu_SubMenuLine_C_InAnimation_Params
	{	};

	/**
	 * Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.PreConstruct
	 */
	struct UCommandMenu_SubMenuLine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.SetBtnNumSwitch
	 */
	struct UCommandMenu_SubMenuLine_C_SetBtnNumSwitch_Params
	{
	public:
		int32_t                                                    BtnNum;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.ExecuteUbergraph_CommandMenu_SubMenuLine
	 */
	struct UCommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
