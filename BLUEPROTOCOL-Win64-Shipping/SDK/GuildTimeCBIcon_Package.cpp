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
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.Set Checked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeCBIcon_C::SetChecked(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.Set Checked");
		
		UGuildTimeCBIcon_C_SetChecked_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBGuildActivityTime                               Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildTimeCBIcon_C::GetTime(ESBGuildActivityTime* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.GetTime");
		
		UGuildTimeCBIcon_C_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.IsCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeCBIcon_C::IsCheck(bool* IsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.IsCheck");
		
		UGuildTimeCBIcon_C_IsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCheck != nullptr)
			*IsCheck = params.IsCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.OnLoaded_C91D83624D7160623CFFE1942693BDF3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildTimeCBIcon_C::OnLoaded_C91D83624D7160623CFFE1942693BDF3(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.OnLoaded_C91D83624D7160623CFFE1942693BDF3");
		
		UGuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeCBIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.PreConstruct");
		
		UGuildTimeCBIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildTimeCBIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.Construct");
		
		UGuildTimeCBIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.InitializeTime
	 * 		Flags  -> ()
	 */
	void UGuildTimeCBIcon_C::InitializeTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.InitializeTime");
		
		UGuildTimeCBIcon_C_InitializeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeCBIcon.GuildTimeCBIcon_C.ExecuteUbergraph_GuildTimeCBIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildTimeCBIcon_C::ExecuteUbergraph_GuildTimeCBIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeCBIcon.GuildTimeCBIcon_C.ExecuteUbergraph_GuildTimeCBIcon");
		
		UGuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildTimeCBIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildTimeCBIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildTimeCBIcon.GuildTimeCBIcon_C");
		return ptr;
	}

}


