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
	 * Function EventIcon.EventIcon_C.CreateToolTipWidgetifNeeded
	 */
	struct UEventIcon_C_CreateToolTipWidgetifNeeded_Params
	{
	public:
		class UEventIconToolTip_C*                                 Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventIcon.EventIcon_C.SetInfo
	 */
	struct UEventIcon_C_SetInfo_Params
	{	};

	/**
	 * Function EventIcon.EventIcon_C.GetToolTipWidget_1
	 */
	struct UEventIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
