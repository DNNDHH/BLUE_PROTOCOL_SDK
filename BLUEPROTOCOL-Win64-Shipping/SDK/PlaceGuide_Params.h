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
	 * Function PlaceGuide.PlaceGuide_C.HideRequestDemo
	 */
	struct UPlaceGuide_C_HideRequestDemo_Params
	{	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.CheckRequest
	 */
	struct UPlaceGuide_C_CheckRequest_Params
	{	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.HideRequest
	 */
	struct UPlaceGuide_C_HideRequest_Params
	{	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.ShowRequest
	 */
	struct UPlaceGuide_C_ShowRequest_Params
	{
	public:
		class FName                                                LocationId;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VKHM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature
	 */
	struct UPlaceGuide_C_BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature_Params
	{	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.ShowRequestDemo
	 */
	struct UPlaceGuide_C_ShowRequestDemo_Params
	{
	public:
		class FName                                                InLocationID;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.OnPlayEnd_Event_1
	 */
	struct UPlaceGuide_C_OnPlayEnd_Event_1_Params
	{	};

	/**
	 * Function PlaceGuide.PlaceGuide_C.ExecuteUbergraph_PlaceGuide
	 */
	struct UPlaceGuide_C_ExecuteUbergraph_PlaceGuide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FMPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
