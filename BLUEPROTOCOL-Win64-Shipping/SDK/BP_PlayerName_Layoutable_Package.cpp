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
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetAchievementName
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::SetAchievementName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetAchievementName");
		
		UBP_PlayerName_Layoutable_C_SetAchievementName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetPlayerName
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::SetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetPlayerName");
		
		UBP_PlayerName_Layoutable_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetLayoutEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LayoutEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerName_Layoutable_C::SetLayoutEditMode(bool LayoutEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetLayoutEditMode");
		
		UBP_PlayerName_Layoutable_C_SetLayoutEditMode_Params params {};
		params.LayoutEditMode = LayoutEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Construct");
		
		UBP_PlayerName_Layoutable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAttachedClientPlayerStateDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerName_Layoutable_C::OnAttachedClientPlayerStateDelegate_Event_1(class ASBPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAttachedClientPlayerStateDelegate_Event_1");
		
		UBP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_1_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.InitPlayerStateDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerName_Layoutable_C::InitPlayerStateDelegate(class ASBPlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.InitPlayerStateDelegate");
		
		UBP_PlayerName_Layoutable_C_InitPlayerStateDelegate_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnCharacterNameChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerName_Layoutable_C::OnCharacterNameChangeDelegate_Event_1(const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnCharacterNameChangeDelegate_Event_1");
		
		UBP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_1_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnChangePlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       InPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerName_Layoutable_C::OnChangePlayerCharacter(class APawn* InPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnChangePlayerCharacter");
		
		UBP_PlayerName_Layoutable_C_OnChangePlayerCharacter_Params params {};
		params.InPawn = InPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnReciveBattleStatus
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::OnReciveBattleStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnReciveBattleStatus");
		
		UBP_PlayerName_Layoutable_C_OnReciveBattleStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAchievementSelectedChangeDelegate_イベント_1
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::OnAchievementSelectedChangeDelegate__1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAchievementSelectedChangeDelegate_イベント_1");
		
		UBP_PlayerName_Layoutable_C_OnAchievementSelectedChangeDelegate__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Destruct");
		
		UBP_PlayerName_Layoutable_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindAttachedClientPlayerStateDelegate
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::UnbindAttachedClientPlayerStateDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindAttachedClientPlayerStateDelegate");
		
		UBP_PlayerName_Layoutable_C_UnbindAttachedClientPlayerStateDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindPlayerStateDelegate
	 * 		Flags  -> ()
	 */
	void UBP_PlayerName_Layoutable_C::UnbindPlayerStateDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindPlayerStateDelegate");
		
		UBP_PlayerName_Layoutable_C_UnbindPlayerStateDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.ExecuteUbergraph_BP_PlayerName_Layoutable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerName_Layoutable_C::ExecuteUbergraph_BP_PlayerName_Layoutable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.ExecuteUbergraph_BP_PlayerName_Layoutable");
		
		UBP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerName_Layoutable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerName_Layoutable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C");
		return ptr;
	}

}


