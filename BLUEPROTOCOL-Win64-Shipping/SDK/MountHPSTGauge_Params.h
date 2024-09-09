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
	 * Function MountHPSTGauge.MountHPSTGauge_C.UpdateHPLossGaunge
	 */
	struct UMountHPSTGauge_C_UpdateHPLossGaunge_Params
	{	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevPlayerHP
	 */
	struct UMountHPSTGauge_C_UpdatePrevPlayerHP_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevENG
	 */
	struct UMountHPSTGauge_C_UpdatePrevENG_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.AdjustPlayerHPGaugeSize
	 */
	struct UMountHPSTGauge_C_AdjustPlayerHPGaugeSize_Params
	{	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.AdjustENGGaugeSize
	 */
	struct UMountHPSTGauge_C_AdjustENGGaugeSize_Params
	{	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.SetBgVisibility
	 */
	struct UMountHPSTGauge_C_SetBgVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.カスタムイベント_2
	 */
	struct UMountHPSTGauge_C__2_Params
	{	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.SetEditMode
	 */
	struct UMountHPSTGauge_C_SetEditMode_Params
	{
	public:
		bool                                                       bIsEdit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.Tick
	 */
	struct UMountHPSTGauge_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.CustomPlayerEvent
	 */
	struct UMountHPSTGauge_C_CustomPlayerEvent_Params
	{	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.Construct
	 */
	struct UMountHPSTGauge_C_Construct_Params
	{	};

	/**
	 * Function MountHPSTGauge.MountHPSTGauge_C.ExecuteUbergraph_MountHPSTGauge
	 */
	struct UMountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
