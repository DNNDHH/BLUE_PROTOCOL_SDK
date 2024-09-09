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
	 * Function EventShopTabBox.EventShopTabBox_C.BtnLocked
	 */
	struct UEventShopTabBox_C_BtnLocked_Params
	{
	public:
		bool                                                       locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.CheckPagerBtn
	 */
	struct UEventShopTabBox_C_CheckPagerBtn_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.SetBannerSelect
	 */
	struct UEventShopTabBox_C_SetBannerSelect_Params
	{
	public:
		class UEventShopTabBox_Banner_C*                           Banner;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ATZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.SetBannerEnable
	 */
	struct UEventShopTabBox_C_SetBannerEnable_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.UpdateBannerInfo
	 */
	struct UEventShopTabBox_C_UpdateBannerInfo_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.UpdateTabInfo
	 */
	struct UEventShopTabBox_C_UpdateTabInfo_Params
	{
	public:
		bool                                                       Prev;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Next;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1B0G[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Click;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.CreateEventList
	 */
	struct UEventShopTabBox_C_CreateEventList_Params
	{
	public:
		TArray<struct FSBEventShopMasterData>                      EventList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.Initialize
	 */
	struct UEventShopTabBox_C_Initialize_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_C_BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.Construct
	 */
	struct UEventShopTabBox_C_Construct_Params
	{	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.ExecuteUbergraph_EventShopTabBox
	 */
	struct UEventShopTabBox_C_ExecuteUbergraph_EventShopTabBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMRU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopTabBox.EventShopTabBox_C.OnClickBanner__DelegateSignature
	 */
	struct UEventShopTabBox_C_OnClickBanner__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
