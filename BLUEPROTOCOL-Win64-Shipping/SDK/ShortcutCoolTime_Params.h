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
	 * Function ShortcutCoolTime.ShortcutCoolTime_C.HideCoolTime
	 */
	struct UShortcutCoolTime_C_HideCoolTime_Params
	{	};

	/**
	 * Function ShortcutCoolTime.ShortcutCoolTime_C.ShowCoolTime
	 */
	struct UShortcutCoolTime_C_ShowCoolTime_Params
	{	};

	/**
	 * Function ShortcutCoolTime.ShortcutCoolTime_C.Construct
	 */
	struct UShortcutCoolTime_C_Construct_Params
	{	};

	/**
	 * Function ShortcutCoolTime.ShortcutCoolTime_C.Tick
	 */
	struct UShortcutCoolTime_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutCoolTime.ShortcutCoolTime_C.ExecuteUbergraph_ShortcutCoolTime
	 */
	struct UShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutCoolTime.ShortcutCoolTime_C.EndCoolTime__DelegateSignature
	 */
	struct UShortcutCoolTime_C_EndCoolTime__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
