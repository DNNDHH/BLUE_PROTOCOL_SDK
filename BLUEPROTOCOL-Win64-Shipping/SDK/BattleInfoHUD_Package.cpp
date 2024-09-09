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
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.GetRespawnHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URespawnHUD_C*                               RespawnHUD                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleInfoHUD_C::GetRespawnHUD(class URespawnHUD_C** RespawnHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.GetRespawnHUD");
		
		UBattleInfoHUD_C_GetRespawnHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RespawnHUD != nullptr)
			*RespawnHUD = params.RespawnHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.GetHitIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHitIndicator_C*                             HitIndicator                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleInfoHUD_C::GetHitIndicator(class UHitIndicator_C** HitIndicator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.GetHitIndicator");
		
		UBattleInfoHUD_C_GetHitIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitIndicator != nullptr)
			*HitIndicator = params.HitIndicator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_Countdown_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UBattleInfoHUD_C::Get_Countdown_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_Countdown_Visibility_1");
		
		UBattleInfoHUD_C_Get_Countdown_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.IsAllHUDCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsCreated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleInfoHUD_C::IsAllHUDCreated(bool* OutIsCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.IsAllHUDCreated");
		
		UBattleInfoHUD_C_IsAllHUDCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsCreated != nullptr)
			*OutIsCreated = params.OutIsCreated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationTimer_Text_1
	 * 		Flags  -> ()
	 */
	class FText UBattleInfoHUD_C::Get_CombinationTimer_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationTimer_Text_1");
		
		UBattleInfoHUD_C_Get_CombinationTimer_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationNumber_Text_1
	 * 		Flags  -> ()
	 */
	class FText UBattleInfoHUD_C::Get_CombinationNumber_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationNumber_Text_1");
		
		UBattleInfoHUD_C_Get_CombinationNumber_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_Combination_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UBattleInfoHUD_C::Get_Combination_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_Combination_Visibility_1");
		
		UBattleInfoHUD_C_Get_Combination_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyLevel
	 * 		Flags  -> ()
	 */
	class FText UBattleInfoHUD_C::Get_PartyLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyLevel");
		
		UBattleInfoHUD_C_Get_PartyLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_NextValue
	 * 		Flags  -> ()
	 */
	class FText UBattleInfoHUD_C::Get_NextValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_NextValue");
		
		UBattleInfoHUD_C_Get_NextValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyEngram
	 * 		Flags  -> ()
	 */
	class FText UBattleInfoHUD_C::Get_PartyEngram()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyEngram");
		
		UBattleInfoHUD_C_Get_PartyEngram_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.InitTutorialHelp_Event
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::InitTutorialHelp_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.InitTutorialHelp_Event");
		
		UBattleInfoHUD_C_InitTutorialHelp_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.JingleTutorialHelp_Events
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialHelpId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleInfoHUD_C::JingleTutorialHelp_Events(const class FName& TutorialHelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.JingleTutorialHelp_Events");
		
		UBattleInfoHUD_C_JingleTutorialHelp_Events_Params params {};
		params.TutorialHelpId = TutorialHelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.OnTutorialHelp_Close
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::OnTutorialHelp_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.OnTutorialHelp_Close");
		
		UBattleInfoHUD_C_OnTutorialHelp_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.UnbindTutorialHelpJingleDelegate
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::UnbindTutorialHelpJingleDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.UnbindTutorialHelpJingleDelegate");
		
		UBattleInfoHUD_C_UnbindTutorialHelpJingleDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.InitWeaponEvents
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::InitWeaponEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.InitWeaponEvents");
		
		UBattleInfoHUD_C_InitWeaponEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Construct");
		
		UBattleInfoHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleInfoHUD_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UBattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.OnShowCombo_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Combo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleInfoHUD_C::OnShowCombo_Event(int32_t Combo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.OnShowCombo_Event");
		
		UBattleInfoHUD_C_OnShowCombo_Event_Params params {};
		params.Combo = Combo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawn_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRespawnTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleInfoHUD_C::OnShowRespawn_Event(float InRespawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawn_Event");
		
		UBattleInfoHUD_C_OnShowRespawn_Event_Params params {};
		params.InRespawnTime = InRespawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.OnDisableRespawn_Event
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::OnDisableRespawn_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.OnDisableRespawn_Event");
		
		UBattleInfoHUD_C_OnDisableRespawn_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.UpdateInteractionNotice
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::UpdateInteractionNotice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.UpdateInteractionNotice");
		
		UBattleInfoHUD_C_UpdateInteractionNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawnBattleArea_Event
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::OnShowRespawnBattleArea_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawnBattleArea_Event");
		
		UBattleInfoHUD_C_OnShowRespawnBattleArea_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.BattleAreaDisableMessage
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::BattleAreaDisableMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.BattleAreaDisableMessage");
		
		UBattleInfoHUD_C_BattleAreaDisableMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.Destruct");
		
		UBattleInfoHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.OnUpdateRespawnGauge
	 * 		Flags  -> ()
	 */
	void UBattleInfoHUD_C::OnUpdateRespawnGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.OnUpdateRespawnGauge");
		
		UBattleInfoHUD_C_OnUpdateRespawnGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleInfoHUD.BattleInfoHUD_C.ExecuteUbergraph_BattleInfoHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleInfoHUD_C::ExecuteUbergraph_BattleInfoHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleInfoHUD.BattleInfoHUD_C.ExecuteUbergraph_BattleInfoHUD");
		
		UBattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleInfoHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleInfoHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleInfoHUD.BattleInfoHUD_C");
		return ptr;
	}

}


