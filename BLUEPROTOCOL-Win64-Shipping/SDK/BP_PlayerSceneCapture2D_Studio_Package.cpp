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
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsStudioVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutIsVisible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::IsStudioVisible(bool* bOutIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsStudioVisible");
		
		ABP_PlayerSceneCapture2D_Studio_C_IsStudioVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsVisible != nullptr)
			*bOutIsVisible = params.bOutIsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFaceCaptureVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetFaceCaptureVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFaceCaptureVisibility");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoOnEnableCapture
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::DoOnEnableCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoOnEnableCapture");
		
		ABP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFacialType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacialType                                      InFacialType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetFacialType(ESBFacialType InFacialType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFacialType");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetFacialType_Params params {};
		params.InFacialType = InFacialType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.JumpMaschineState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MachinName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::JumpMaschineState(const class FString& MachinName, const class FString& StateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.JumpMaschineState");
		
		ABP_PlayerSceneCapture2D_Studio_C_JumpMaschineState_Params params {};
		params.MachinName = MachinName;
		params.StateName = StateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetSceneCapture2DCameraForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBattleSet                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetSceneCapture2DCameraForBattleSet(bool InIsBattleSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetSceneCapture2DCameraForBattleSet");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet_Params params {};
		params.InIsBattleSet = InIsBattleSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatarWeapon
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::UpdatePlayerAvatarWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatarWeapon");
		
		ABP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWantVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureEnable_Internal(bool bIsEnable, bool* bWantVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable_Internal");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal_Params params {};
		params.bIsEnable = bIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWantVisible != nullptr)
			*bWantVisible = params.bWantVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnableByMoveing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureEnableByMoveing(bool bIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnableByMoveing");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing_Params params {};
		params.bIsEnable = bIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetLightEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetLightEnable(bool bIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetLightEnable");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetLightEnable_Params params {};
		params.bIsEnable = bIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshEnableFlag
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::RefreshEnableFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshEnableFlag");
		
		ABP_PlayerSceneCapture2D_Studio_C_RefreshEnableFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCharaCreateParameterOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& CharaCreateParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCharaCreateParameterOnly");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsDataByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsDataByUniqueId");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId_Params params {};
		params.CostumeData = CostumeData;
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCostumePartsData(const struct FSBMasterCostume& CostumeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsData");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData_Params params {};
		params.CostumeData = CostumeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetForceDirectionalLightEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetForceDirectionalLightEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetForceDirectionalLightEnable");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsEmoteFinished
	 * 		Flags  -> ()
	 */
	bool ABP_PlayerSceneCapture2D_Studio_C::IsEmoteFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsEmoteFinished");
		
		ABP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureWhenMovingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCaptureWhenMovingMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CaptureGraceTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureWhenMovingMode(bool bCaptureWhenMovingMode, float CaptureGraceTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureWhenMovingMode");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode_Params params {};
		params.bCaptureWhenMovingMode = bCaptureWhenMovingMode;
		params.CaptureGraceTime = CaptureGraceTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CancelEmote
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::CancelEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CancelEmote");
		
		ABP_PlayerSceneCapture2D_Studio_C_CancelEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EmoteName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::RequestEmote(const class FName& EmoteName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestEmote");
		
		ABP_PlayerSceneCapture2D_Studio_C_RequestEmote_Params params {};
		params.EmoteName = EmoteName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetIsPlayerAvatarNaked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNaked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetIsPlayerAvatarNaked(bool InIsNaked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetIsPlayerAvatarNaked");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked_Params params {};
		params.InIsNaked = InIsNaked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.GetDirectionalLightRotation
	 * 		Flags  -> ()
	 */
	struct FRotator ABP_PlayerSceneCapture2D_Studio_C::GetDirectionalLightRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.GetDirectionalLightRotation");
		
		ABP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarEyeBlinkEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetPlayerAvatarEyeBlinkEnable(bool InIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarEyeBlinkEnable");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable_Params params {};
		params.InIsEnable = InIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AdjustSceneCapture2dTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    InSceneCapture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InSceneCaptue2dOffsetLocation                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InSceneCapture2dOffsetRotator                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::AdjustSceneCapture2dTransform(class USceneCaptureComponent2D* InSceneCapture, const struct FVector& InSceneCaptue2dOffsetLocation, const struct FRotator& InSceneCapture2dOffsetRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AdjustSceneCapture2dTransform");
		
		ABP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform_Params params {};
		params.InSceneCapture = InSceneCapture;
		params.InSceneCaptue2dOffsetLocation = InSceneCaptue2dOffsetLocation;
		params.InSceneCapture2dOffsetRotator = InSceneCapture2dOffsetRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureEnable(bool bIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Params params {};
		params.bIsEnable = bIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetStudioVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetStudioVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetStudioVisibility");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshAvatar
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::RefreshAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshAvatar");
		
		ABP_PlayerSceneCapture2D_Studio_C_RefreshAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatar
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::UpdatePlayerAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatar");
		
		ABP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdateAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     InNewCharaCreateParameter                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdateAvatar");
		
		ABP_PlayerSceneCapture2D_Studio_C_UpdateAvatar_Params params {};
		params.InNewCharaCreateParameter = InNewCharaCreateParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarRotateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetPlayerAvatarRotateActive(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarRotateActive");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ResetPlayerAvatarRotation
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ResetPlayerAvatarRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ResetPlayerAvatarRotation");
		
		ABP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RotatePlayerAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAddRotateValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::RotatePlayerAvatar(float InAddRotateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RotatePlayerAvatar");
		
		ABP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar_Params params {};
		params.InAddRotateValue = InAddRotateValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UserConstructionScript");
		
		ABP_PlayerSceneCapture2D_Studio_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureFaceImage
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::CaptureFaceImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureFaceImage");
		
		ABP_PlayerSceneCapture2D_Studio_C_CaptureFaceImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AddAvatarRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaRotationZ                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::AddAvatarRotation(float DeltaRotationZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AddAvatarRotation");
		
		ABP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation_Params params {};
		params.DeltaRotationZ = DeltaRotationZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ConstructPriorityGraph
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ConstructPriorityGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ConstructPriorityGraph");
		
		ABP_PlayerSceneCapture2D_Studio_C_ConstructPriorityGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DestructPriorityGraph
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::DestructPriorityGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DestructPriorityGraph");
		
		ABP_PlayerSceneCapture2D_Studio_C_DestructPriorityGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCreateCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnCreateCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCreateCapture");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnCreateCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDestroyCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnDestroyCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDestroyCapture");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEnableCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnEnableCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEnableCapture");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnEnableCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDisableCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnDisableCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDisableCapture");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnDisableCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.StartUploadImage
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::StartUploadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.StartUploadImage");
		
		ABP_PlayerSceneCapture2D_Studio_C_StartUploadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoFaceImageUpload
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::DoFaceImageUpload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoFaceImageUpload");
		
		ABP_PlayerSceneCapture2D_Studio_C_DoFaceImageUpload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadFacemageComplete_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnUploadFacemageComplete_(bool bResult, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadFacemageComplete_イベント");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete__Params params {};
		params.bResult = bResult;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestPlayerAvatarResetPoseToDefault
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::RequestPlayerAvatarResetPoseToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestPlayerAvatarResetPoseToDefault");
		
		ABP_PlayerSceneCapture2D_Studio_C_RequestPlayerAvatarResetPoseToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnPlayerAvatarPoseChangedToDefault_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnPlayerAvatarPoseChangedToDefault_(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnPlayerAvatarPoseChangedToDefault_イベント");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault__Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CompleteUploadImage
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::CompleteUploadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CompleteUploadImage");
		
		ABP_PlayerSceneCapture2D_Studio_C_CompleteUploadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveBeginPlay");
		
		ABP_PlayerSceneCapture2D_Studio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SetPlayerAvatarVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarVisibility");
		
		ABP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveTick");
		
		ABP_PlayerSceneCapture2D_Studio_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.Tick_PlayerAvatarRotate
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::Tick_PlayerAvatarRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.Tick_PlayerAvatarRotate");
		
		ABP_PlayerSceneCapture2D_Studio_C_Tick_PlayerAvatarRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnCharaPartsLoaded(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoaded");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureWhenMovingUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::CaptureWhenMovingUpdate(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureWhenMovingUpdate");
		
		ABP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.TargetMoving
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::TargetMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.TargetMoving");
		
		ABP_PlayerSceneCapture2D_Studio_C_TargetMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SendCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::SendCommand(const class FName& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SendCommand");
		
		ABP_PlayerSceneCapture2D_Studio_C_SendCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnInitialLoaded
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnInitialLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnInitialLoaded");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnInitialLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveEndPlay");
		
		ABP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ForceCaptureEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ForceCaptureEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ForceCaptureEnabled");
		
		ABP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio");
		
		ABP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEmoteFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnEmoteFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEmoteFinished__DelegateSignature");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnEmoteFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadImageCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnUploadImageCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadImageCompleted__DelegateSignature");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnUploadImageCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoadedDelegete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSceneCapture2D_Studio_C::OnCharaPartsLoadedDelegete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoadedDelegete__DelegateSignature");
		
		ABP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoadedDelegete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerSceneCapture2D_Studio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerSceneCapture2D_Studio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C");
		return ptr;
	}

}


