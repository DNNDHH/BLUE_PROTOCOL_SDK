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
	 * Function CmnCostume.CmnCostume_C.RefreshCharaCreateParameter
	 */
	struct UCmnCostume_C_RefreshCharaCreateParameter_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.SetButtonPosition_Posing
	 */
	struct UCmnCostume_C_SetButtonPosition_Posing_Params
	{
	public:
		EShopType                                                  ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocationByCostumeId
	 */
	struct UCmnCostume_C_IsOccupiedTryingLocationByCostumeId_Params
	{
	public:
		int32_t                                                    CostumeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOccupied;                                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6SIK[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocation
	 */
	struct UCmnCostume_C_IsOccupiedTryingLocation_Params
	{
	public:
		EProtectorCategory                                         ProtectorCategory;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOccupied;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DVT8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.ApplyTryingCostumeData
	 */
	struct UCmnCostume_C_ApplyTryingCostumeData_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.ApplyBaseEquip
	 */
	struct UCmnCostume_C_ApplyBaseEquip_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.OccupTryingLocationByMasterCostume
	 */
	struct UCmnCostume_C_OccupTryingLocationByMasterCostume_Params
	{
	public:
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.OccupTryingLocation
	 */
	struct UCmnCostume_C_OccupTryingLocation_Params
	{
	public:
		EProtectorCategory                                         ProtectorCategory;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CKKB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnCostume.CmnCostume_C.RemoveTryingCostume
	 */
	struct UCmnCostume_C_RemoveTryingCostume_Params
	{
	public:
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.AddTryingCosutume
	 */
	struct UCmnCostume_C_AddTryingCosutume_Params
	{
	public:
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x0088(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.InitBaseData
	 */
	struct UCmnCostume_C_InitBaseData_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.IsValidCosutumeData
	 */
	struct UCmnCostume_C_IsValidCosutumeData_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.SetVisibleIfValidCostumeData
	 */
	struct UCmnCostume_C_SetVisibleIfValidCostumeData_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bVisible;                                                // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.SetVisible
	 */
	struct UCmnCostume_C_SetVisible_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceLightVisible;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.ResetTryingData
	 */
	struct UCmnCostume_C_ResetTryingData_Params
	{
	public:
		bool                                                       bUpdateCapture;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K8W5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnCostume.CmnCostume_C.UpdateCapture
	 */
	struct UCmnCostume_C_UpdateCapture_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.SetTryingCostume
	 */
	struct UCmnCostume_C_SetTryingCostume_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x0088(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUpdateCapture;                                          // 0x0099(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KBBH[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnCostume.CmnCostume_C.Construct
	 */
	struct UCmnCostume_C_Construct_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.Zoom
	 */
	struct UCmnCostume_C_Zoom_Params
	{
	public:
		bool                                                       bZoomIn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnimation;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.Destruct
	 */
	struct UCmnCostume_C_Destruct_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.Init
	 */
	struct UCmnCostume_C_Init_Params
	{
	public:
		class FName                                                LayoutType;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnCostume_C_BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.ExecuteUbergraph_CmnCostume
	 */
	struct UCmnCostume_C_ExecuteUbergraph_CmnCostume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.OnTrying__DelegateSignature
	 */
	struct UCmnCostume_C_OnTrying__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnCostume.CmnCostume_C.OnClickZoomOut__DelegateSignature
	 */
	struct UCmnCostume_C_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.OnClickZoomIn__DelegateSignature
	 */
	struct UCmnCostume_C_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function CmnCostume.CmnCostume_C.OnCreatePlayerCapture__DelegateSignature
	 */
	struct UCmnCostume_C_OnCreatePlayerCapture__DelegateSignature_Params
	{
	public:
		class ABP_PlayerSceneCapture2D_Studio_C*                   PlayerCapture;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
