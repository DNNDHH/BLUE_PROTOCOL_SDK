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
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetFacialType
	 */
	struct ABP_PlayerSceneCapture2D_C_SetFacialType_Params
	{
	public:
		ESBFacialType                                              InFacialType;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetExtraCharaPartsComponentList
	 */
	struct ABP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList_Params
	{
	public:
		TArray<class USBCharaPartsComponent*>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UnuseCopyPose
	 */
	struct ABP_PlayerSceneCapture2D_C_UnuseCopyPose_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitCopyPose
	 */
	struct ABP_PlayerSceneCapture2D_C_InitCopyPose_Params
	{
	public:
		class USkeletalMeshComponent*                              SourceCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitPhotoMode
	 */
	struct ABP_PlayerSceneCapture2D_C_InitPhotoMode_Params
	{
	public:
		class ASBPlayerCharacter*                                  BasePlayerCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GNIH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Show Weapon
	 */
	struct ABP_PlayerSceneCapture2D_C_ShowWeapon_Params
	{
	public:
		bool                                                       bIsViewWeapon;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsCheckSheathe;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsCopyAnimation;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateWeapon
	 */
	struct ABP_PlayerSceneCapture2D_C_UpdateWeapon_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get Fidget State Name
	 */
	struct ABP_PlayerSceneCapture2D_C_GetFidgetStateName_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NI3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutStateName;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCharaCreateParameterOnly
	 */
	struct ABP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataMain
	 */
	struct ABP_PlayerSceneCapture2D_C_SetCostumePartsDataMain_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    ColorIndex;                                              // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ColorSaturation;                                         // 0x008C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ColorValue;                                              // 0x0090(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaterialIndex;                                         // 0x0094(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataByUniqueId
	 */
	struct ABP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InUniqueId;                                              // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsData
	 */
	struct ABP_PlayerSceneCapture2D_C_SetCostumePartsData_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetIsAvatarNaked
	 */
	struct ABP_PlayerSceneCapture2D_C_SetIsAvatarNaked_Params
	{
	public:
		bool                                                       InIsNaked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.FindStateName
	 */
	struct ABP_PlayerSceneCapture2D_C_FindStateName_Params
	{
	public:
		class FString                                              InStateName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OutNo;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetStateNum
	 */
	struct ABP_PlayerSceneCapture2D_C_GetStateNum_Params
	{
	public:
		int32_t                                                    OutNum;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Name
	 */
	struct ABP_PlayerSceneCapture2D_C_GetStateName_Params
	{
	public:
		int32_t                                                    InStateNameNo;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SKXZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutStateName;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Machine Name
	 */
	struct ABP_PlayerSceneCapture2D_C_GetStateMachineName_Params
	{
	public:
		class FString                                              OutName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetCurrentAvatarPosingAnimStateName
	 */
	struct ABP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName_Params
	{
	public:
		class FString                                              OutAnimStateName;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.RefreshAvatar
	 */
	struct ABP_PlayerSceneCapture2D_C_RefreshAvatar_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatarFromPlayerCharacter
	 */
	struct ABP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatar
	 */
	struct ABP_PlayerSceneCapture2D_C_UpdateAvatar_Params
	{
	public:
		struct FSBCharaCreateParameter                             InNewCharaCreateParameter;                               // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerSceneCapture2D_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState_イベント
	 */
	struct ABP_PlayerSceneCapture2D_C_OnChangeState__Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveEndPlay
	 */
	struct ABP_PlayerSceneCapture2D_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon_Event
	 */
	struct ABP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event_Params
	{
	public:
		bool                                                       bIsShowWeapon;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsCheckSheathe;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsCopyAnimation;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ShowWeapon_Debug
	 */
	struct ABP_PlayerSceneCapture2D_C_ShowWeapon_Debug_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ExecuteUbergraph_BP_PlayerSceneCapture2D
	 */
	struct ABP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon__DelegateSignature
	 */
	struct ABP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature_Params
	{
	public:
		bool                                                       bIsShowWeapon;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsCheckSheathe;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsCopyAnimation;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState__DelegateSignature
	 */
	struct ABP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature_Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
