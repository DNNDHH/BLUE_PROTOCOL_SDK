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
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UnSheathe
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAimHUDComponent_C::UnSheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UnSheathe");
		
		UBP_PlayerAimHUDComponent_C_UnSheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.Sheathe
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAimHUDComponent_C::Sheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.Sheathe");
		
		UBP_PlayerAimHUDComponent_C_Sheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.IsControll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsControll                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerAimHUDComponent_C::IsControll(bool* OutIsControll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.IsControll");
		
		UBP_PlayerAimHUDComponent_C_IsControll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsControll != nullptr)
			*OutIsControll = params.OutIsControll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.GetClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       OutIsClassType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAimHUDComponent_C::GetClassType(ESBClassType* OutIsClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.GetClassType");
		
		UBP_PlayerAimHUDComponent_C_GetClassType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsClassType != nullptr)
			*OutIsClassType = params.OutIsClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UpdateAimMarkerVisibility
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAimHUDComponent_C::UpdateAimMarkerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UpdateAimMarkerVisibility");
		
		UBP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.SetAimUIVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerAimHUDComponent_C::SetAimUIVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.SetAimUIVisibility");
		
		UBP_PlayerAimHUDComponent_C_SetAimUIVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.RemoveUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAimHUDComponent_C::RemoveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.RemoveUI");
		
		UBP_PlayerAimHUDComponent_C_RemoveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.CreateUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAimHUDComponent_C::CreateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.CreateUI");
		
		UBP_PlayerAimHUDComponent_C_CreateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAimHUDComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveBeginPlay");
		
		UBP_PlayerAimHUDComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAimHUDComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveTick");
		
		UBP_PlayerAimHUDComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAimHUDComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveEndPlay");
		
		UBP_PlayerAimHUDComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.OnChangeVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerAimHUDComponent_C::OnChangeVisibleSetting(ESBUIType InUIType, bool InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.OnChangeVisibleSetting");
		
		UBP_PlayerAimHUDComponent_C_OnChangeVisibleSetting_Params params {};
		params.InUIType = InUIType;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerAimHUDComponent_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UBP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ExecuteUbergraph_BP_PlayerAimHUDComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAimHUDComponent_C::ExecuteUbergraph_BP_PlayerAimHUDComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ExecuteUbergraph_BP_PlayerAimHUDComponent");
		
		UBP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerAimHUDComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerAimHUDComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C");
		return ptr;
	}

}


