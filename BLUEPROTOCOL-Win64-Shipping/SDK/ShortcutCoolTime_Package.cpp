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
	 * 		Name   -> Function ShortcutCoolTime.ShortcutCoolTime_C.HideCoolTime
	 * 		Flags  -> ()
	 */
	void UShortcutCoolTime_C::HideCoolTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutCoolTime.ShortcutCoolTime_C.HideCoolTime");
		
		UShortcutCoolTime_C_HideCoolTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutCoolTime.ShortcutCoolTime_C.ShowCoolTime
	 * 		Flags  -> ()
	 */
	void UShortcutCoolTime_C::ShowCoolTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutCoolTime.ShortcutCoolTime_C.ShowCoolTime");
		
		UShortcutCoolTime_C_ShowCoolTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutCoolTime.ShortcutCoolTime_C.Construct
	 * 		Flags  -> ()
	 */
	void UShortcutCoolTime_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutCoolTime.ShortcutCoolTime_C.Construct");
		
		UShortcutCoolTime_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutCoolTime.ShortcutCoolTime_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutCoolTime_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutCoolTime.ShortcutCoolTime_C.Tick");
		
		UShortcutCoolTime_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutCoolTime.ShortcutCoolTime_C.ExecuteUbergraph_ShortcutCoolTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutCoolTime_C::ExecuteUbergraph_ShortcutCoolTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutCoolTime.ShortcutCoolTime_C.ExecuteUbergraph_ShortcutCoolTime");
		
		UShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutCoolTime.ShortcutCoolTime_C.EndCoolTime__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShortcutCoolTime_C::EndCoolTime__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutCoolTime.ShortcutCoolTime_C.EndCoolTime__DelegateSignature");
		
		UShortcutCoolTime_C_EndCoolTime__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutCoolTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutCoolTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutCoolTime.ShortcutCoolTime_C");
		return ptr;
	}

}


