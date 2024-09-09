/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetFacialType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacialType                                      InFacialType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::SetFacialType(ESBFacialType InFacialType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetFacialType");
		
		ABP_PlayerSceneCapture2D_C_SetFacialType_Params params {};
		params.InFacialType = InFacialType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetExtraCharaPartsComponentList
	 * 		Flags  -> ()
	 */
	TArray<class USBCharaPartsComponent*> ABP_PlayerSceneCapture2D_C::GetExtraCharaPartsComponentList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetExtraCharaPartsComponentList");
		
		ABP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UnuseCopyPose
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_C::UnuseCopyPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UnuseCopyPose");
		
		ABP_PlayerSceneCapture2D_C_UnuseCopyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitCopyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SourceCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::InitCopyPose(class USkeletalMeshComponent* SourceCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitCopyPose");
		
		ABP_PlayerSceneCapture2D_C_InitCopyPose_Params params {};
		params.SourceCharacter = SourceCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          BasePlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::InitPhotoMode(class ASBPlayerCharacter* BasePlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitPhotoMode");
		
		ABP_PlayerSceneCapture2D_C_InitPhotoMode_Params params {};
		params.BasePlayerCharacter = BasePlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Show Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsViewWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsCheckSheathe                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsCopyAnimation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_C::ShowWeapon(bool bIsViewWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Show Weapon");
		
		ABP_PlayerSceneCapture2D_C_ShowWeapon_Params params {};
		params.bIsViewWeapon = bIsViewWeapon;
		params.bIsCheckSheathe = bIsCheckSheathe;
		params.bIsCopyAnimation = bIsCopyAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateWeapon
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_C::UpdateWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateWeapon");
		
		ABP_PlayerSceneCapture2D_C_UpdateWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get Fidget State Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutStateName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::GetFidgetStateName(bool* IsValid, class FString* OutStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get Fidget State Name");
		
		ABP_PlayerSceneCapture2D_C_GetFidgetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutStateName != nullptr)
			*OutStateName = params.OutStateName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCharaCreateParameterOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerSceneCapture2D_C::SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& CharaCreateParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCharaCreateParameterOnly");
		
		ABP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColorSaturation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColorValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaterialIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::SetCostumePartsDataMain(const struct FSBMasterCostume& CostumeData, int32_t ColorIndex, int32_t ColorSaturation, int32_t ColorValue, int32_t InMaterialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataMain");
		
		ABP_PlayerSceneCapture2D_C_SetCostumePartsDataMain_Params params {};
		params.CostumeData = CostumeData;
		params.ColorIndex = ColorIndex;
		params.ColorSaturation = ColorSaturation;
		params.ColorValue = ColorValue;
		params.InMaterialIndex = InMaterialIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataByUniqueId");
		
		ABP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId_Params params {};
		params.CostumeData = CostumeData;
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerSceneCapture2D_C::SetCostumePartsData(const struct FSBMasterCostume& CostumeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsData");
		
		ABP_PlayerSceneCapture2D_C_SetCostumePartsData_Params params {};
		params.CostumeData = CostumeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetIsAvatarNaked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNaked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_C::SetIsAvatarNaked(bool InIsNaked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetIsAvatarNaked");
		
		ABP_PlayerSceneCapture2D_C_SetIsAvatarNaked_Params params {};
		params.InIsNaked = InIsNaked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.FindStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStateName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutNo                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::FindStateName(const class FString& InStateName, int32_t* OutNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.FindStateName");
		
		ABP_PlayerSceneCapture2D_C_FindStateName_Params params {};
		params.InStateName = InStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNo != nullptr)
			*OutNo = params.OutNo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetStateNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutNum                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::GetStateNum(int32_t* OutNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetStateNum");
		
		ABP_PlayerSceneCapture2D_C_GetStateNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNum != nullptr)
			*OutNum = params.OutNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStateNameNo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutStateName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::GetStateName(int32_t InStateNameNo, bool* IsValid, class FString* OutStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Name");
		
		ABP_PlayerSceneCapture2D_C_GetStateName_Params params {};
		params.InStateNameNo = InStateNameNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutStateName != nullptr)
			*OutStateName = params.OutStateName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Machine Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::GetStateMachineName(class FString* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Machine Name");
		
		ABP_PlayerSceneCapture2D_C_GetStateMachineName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetCurrentAvatarPosingAnimStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutAnimStateName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::GetCurrentAvatarPosingAnimStateName(class FString* OutAnimStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetCurrentAvatarPosingAnimStateName");
		
		ABP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimStateName != nullptr)
			*OutAnimStateName = params.OutAnimStateName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.RefreshAvatar
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_C::RefreshAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.RefreshAvatar");
		
		ABP_PlayerSceneCapture2D_C_RefreshAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatarFromPlayerCharacter
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_C::UpdateAvatarFromPlayerCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatarFromPlayerCharacter");
		
		ABP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     InNewCharaCreateParameter                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerSceneCapture2D_C::UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatar");
		
		ABP_PlayerSceneCapture2D_C_UpdateAvatar_Params params {};
		params.InNewCharaCreateParameter = InNewCharaCreateParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveBeginPlay");
		
		ABP_PlayerSceneCapture2D_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::OnChangeState_(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState_イベント");
		
		ABP_PlayerSceneCapture2D_C_OnChangeState__Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveEndPlay");
		
		ABP_PlayerSceneCapture2D_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShowWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsCheckSheathe                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsCopyAnimation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_C::TestShowAvatarEquipWeapon_Event(bool bIsShowWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon_Event");
		
		ABP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event_Params params {};
		params.bIsShowWeapon = bIsShowWeapon;
		params.bIsCheckSheathe = bIsCheckSheathe;
		params.bIsCopyAnimation = bIsCopyAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ShowWeapon_Debug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_C::ShowWeapon_Debug(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ShowWeapon_Debug");
		
		ABP_PlayerSceneCapture2D_C_ShowWeapon_Debug_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ExecuteUbergraph_BP_PlayerSceneCapture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::ExecuteUbergraph_BP_PlayerSceneCapture2D(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ExecuteUbergraph_BP_PlayerSceneCapture2D");
		
		ABP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShowWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsCheckSheathe                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsCopyAnimation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_C::TestShowAvatarEquipWeapon__DelegateSignature(bool bIsShowWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon__DelegateSignature");
		
		ABP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature_Params params {};
		params.bIsShowWeapon = bIsShowWeapon;
		params.bIsCheckSheathe = bIsCheckSheathe;
		params.bIsCopyAnimation = bIsCopyAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_C::OnChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState__DelegateSignature");
		
		ABP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature_Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerSceneCapture2D_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerSceneCapture2D_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C");
		return ptr;
	}

}


