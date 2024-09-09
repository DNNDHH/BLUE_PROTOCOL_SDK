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
	 * Function WPB_BuffIcon.WPB_BuffIcon_C.Get_BuffIcon_1_ToolTipWidget_1
	 */
	struct UWPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPB_BuffIcon.WPB_BuffIcon_C.SetBuffIcon
	 */
	struct UWPB_BuffIcon_C_SetBuffIcon_Params
	{
	public:
		class FName                                                BuffName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPB_BuffIcon.WPB_BuffIcon_C.ExecuteUbergraph_WPB_BuffIcon
	 */
	struct UWPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
