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
	 * Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Set Bg Color
	 */
	struct UCommandMenu_BgAnim_C_SetBgColor_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAnim;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Construct
	 */
	struct UCommandMenu_BgAnim_C_Construct_Params
	{	};

	/**
	 * Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.ExecuteUbergraph_CommandMenu_BgAnim
	 */
	struct UCommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
