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
	 * 		Name   -> Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.OnChangeWeaponVisibility
	 * 		Flags  -> ()
	 */
	void UBP_SBPhotoModePlayerControlData_C::OnChangeWeaponVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.OnChangeWeaponVisibility");
		
		UBP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.CreateCloneCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InParent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCopyPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBPhotoModePlayerControlData_C::CreateCloneCharacter(class UObject* InParent, bool bInCopyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.CreateCloneCharacter");
		
		UBP_SBPhotoModePlayerControlData_C_CreateCloneCharacter_Params params {};
		params.InParent = InParent;
		params.bInCopyPose = bInCopyPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.SetPlayerHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsHidden                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBPhotoModePlayerControlData_C::SetPlayerHidden(bool bIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.SetPlayerHidden");
		
		UBP_SBPhotoModePlayerControlData_C_SetPlayerHidden_Params params {};
		params.bIsHidden = bIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_CreateCloneCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InParent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCopyPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBPhotoModePlayerControlData_C::BP_CreateCloneCharacter(class UObject* InParent, bool bInCopyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_CreateCloneCharacter");
		
		UBP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter_Params params {};
		params.InParent = InParent;
		params.bInCopyPose = bInCopyPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_OnChangeWeaponVisibility
	 * 		Flags  -> ()
	 */
	void UBP_SBPhotoModePlayerControlData_C::BP_OnChangeWeaponVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_OnChangeWeaponVisibility");
		
		UBP_SBPhotoModePlayerControlData_C_BP_OnChangeWeaponVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.ExecuteUbergraph_BP_SBPhotoModePlayerControlData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBPhotoModePlayerControlData_C::ExecuteUbergraph_BP_SBPhotoModePlayerControlData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.ExecuteUbergraph_BP_SBPhotoModePlayerControlData");
		
		UBP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SBPhotoModePlayerControlData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SBPhotoModePlayerControlData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C");
		return ptr;
	}

}


