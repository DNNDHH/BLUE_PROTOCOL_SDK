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
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetActiveMannequin
	 */
	struct ABP_MannequinForCapture_Studio_C_GetActiveMannequin_Params
	{
	public:
		class ASBCharaCreateCharacter*                             AsSBCharaCreateCharacter;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinArrangementCameraSettingInfo
	 */
	struct ABP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo_Params
	{
	public:
		int32_t                                                    InCostumeId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsMale;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UY5V[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FST_MannequinForCapture_CameraSettingInfo           OutArrangementCameraSettingInfo;                         // 0x0008(0x002C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2M52[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.IsPartsLoaded
	 */
	struct ABP_MannequinForCapture_Studio_C_IsPartsLoaded_Params
	{
	public:
		class UChildActorComponent*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XCP9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinGradationEnable
	 */
	struct ABP_MannequinForCapture_Studio_C_SetMannequinGradationEnable_Params
	{
	public:
		bool                                                       InIsEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RFSN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinAndCameraByCostumeType
	 */
	struct ABP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType_Params
	{
	public:
		EProtectorCategory                                         InCostumeType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TF0A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCostumeId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinCameraSettingInfoFromType
	 */
	struct ABP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType_Params
	{
	public:
		EProtectorCategory                                         InCostumType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsMale;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQXG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FST_MannequinForCapture_Info                        OutCostumeMannequinInfo;                                 // 0x0004(0x0030)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.DestroyAllChildComponents
	 */
	struct ABP_MannequinForCapture_Studio_C_DestroyAllChildComponents_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequinAndCameraToDefaultTrans
	 */
	struct ABP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.UserConstructionScript
	 */
	struct ABP_MannequinForCapture_Studio_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveBeginPlay
	 */
	struct ABP_MannequinForCapture_Studio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinVisibility
	 */
	struct ABP_MannequinForCapture_Studio_C_SetMannequinVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveEndPlay
	 */
	struct ABP_MannequinForCapture_Studio_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin
	 */
	struct ABP_MannequinForCapture_Studio_C_SwitchActiveMannequin_Params
	{
	public:
		bool                                                       IsMaleActive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EProtectorCategory                                         InProtectorCategory;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKO1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCostumeItemId;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsNoResetLocAndRot;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetCostumeToMannequin
	 */
	struct ABP_MannequinForCapture_Studio_C_SetCostumeToMannequin_Params
	{
	public:
		int32_t                                                    InCostumeItemIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOwnItem;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AVPD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InOwnCostumeColorId;                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOwnCostumeColorS;                                      // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOwnCostumeColorV;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOwnCostumeMaterialId;                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequin
	 */
	struct ABP_MannequinForCapture_Studio_C_ResetMannequin_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetModelAndCameraTransform
	 */
	struct ABP_MannequinForCapture_Studio_C_ResetModelAndCameraTransform_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeMaleLoadEnd
	 */
	struct ABP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeFemaleLoadEnd
	 */
	struct ABP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin_LoadAssetAfter
	 */
	struct ABP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter_Params
	{
	public:
		bool                                                       IsMaleActive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EProtectorCategory                                         InProtectorCategory;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TZX1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCostumeItemId;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsNoResetLocAndRot;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeLoaded
	 */
	struct ABP_MannequinForCapture_Studio_C_CostumeLoaded_Params
	{	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ExecuteUbergraph_BP_MannequinForCapture_Studio
	 */
	struct ABP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.OnCostumeLoadedDelegete__DelegateSignature
	 */
	struct ABP_MannequinForCapture_Studio_C_OnCostumeLoadedDelegete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
