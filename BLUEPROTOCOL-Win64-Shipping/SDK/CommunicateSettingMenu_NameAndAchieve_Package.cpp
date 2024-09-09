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
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::SetName(const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetName");
		
		UCommunicateSettingMenu_NameAndAchieve_C_SetName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetAchievementName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsResult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::SetAchievementName(int32_t InAchievementId, bool* IsResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetAchievementName");
		
		UCommunicateSettingMenu_NameAndAchieve_C_SetAchievementName_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsResult != nullptr)
			*IsResult = params.IsResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ClearAchievementText
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::ClearAchievementText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ClearAchievementText");
		
		UCommunicateSettingMenu_NameAndAchieve_C_ClearAchievementText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.Construct");
		
		UCommunicateSettingMenu_NameAndAchieve_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCommunicateSettingMenu_NameAndAchieve_C_BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ErrorDataSet
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::ErrorDataSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ErrorDataSet");
		
		UCommunicateSettingMenu_NameAndAchieve_C_ErrorDataSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve");
		
		UCommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.OnAchievementSelectWindowOpenEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_NameAndAchieve_C::OnAchievementSelectWindowOpenEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.OnAchievementSelectWindowOpenEvent__DelegateSignature");
		
		UCommunicateSettingMenu_NameAndAchieve_C_OnAchievementSelectWindowOpenEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_NameAndAchieve_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_NameAndAchieve_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C");
		return ptr;
	}

}


