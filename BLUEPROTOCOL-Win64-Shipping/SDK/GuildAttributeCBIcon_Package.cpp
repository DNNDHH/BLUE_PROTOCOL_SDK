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
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.SetChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeCBIcon_C::SetChecked(bool bIsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.SetChecked");
		
		UGuildAttributeCBIcon_C_SetChecked_Params params {};
		params.bIsCheck = bIsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.GetAttrib
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGuildAttribute                                    Attribute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildAttributeCBIcon_C::GetAttrib(EGuildAttribute* Attribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.GetAttrib");
		
		UGuildAttributeCBIcon_C_GetAttrib_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attribute != nullptr)
			*Attribute = params.Attribute;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.IsCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeCBIcon_C::IsCheck(bool* IsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.IsCheck");
		
		UGuildAttributeCBIcon_C_IsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCheck != nullptr)
			*IsCheck = params.IsCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildAttributeCBIcon_C::OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1");
		
		UGuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeCBIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.PreConstruct");
		
		UGuildAttributeCBIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildAttributeCBIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Construct");
		
		UGuildAttributeCBIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Initialize Attribute
	 * 		Flags  -> ()
	 */
	void UGuildAttributeCBIcon_C::InitializeAttribute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Initialize Attribute");
		
		UGuildAttributeCBIcon_C_InitializeAttribute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.ExecuteUbergraph_GuildAttributeCBIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildAttributeCBIcon_C::ExecuteUbergraph_GuildAttributeCBIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.ExecuteUbergraph_GuildAttributeCBIcon");
		
		UGuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildAttributeCBIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildAttributeCBIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildAttributeCBIcon.GuildAttributeCBIcon_C");
		return ptr;
	}

}


