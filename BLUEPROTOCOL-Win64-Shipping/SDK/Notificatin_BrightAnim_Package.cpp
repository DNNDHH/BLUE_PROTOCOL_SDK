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
	 * 		Name   -> Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Hide
	 * 		Flags  -> ()
	 */
	void UNotificatin_BrightAnim_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Hide");
		
		UNotificatin_BrightAnim_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Show
	 * 		Flags  -> ()
	 */
	void UNotificatin_BrightAnim_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Show");
		
		UNotificatin_BrightAnim_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotificatin_BrightAnim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Construct");
		
		UNotificatin_BrightAnim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotificatin_BrightAnim_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.OnAnimationFinished");
		
		UNotificatin_BrightAnim_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.ExecuteUbergraph_Notificatin_BrightAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotificatin_BrightAnim_C::ExecuteUbergraph_Notificatin_BrightAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.ExecuteUbergraph_Notificatin_BrightAnim");
		
		UNotificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificatin_BrightAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificatin_BrightAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Notificatin_BrightAnim.Notificatin_BrightAnim_C");
		return ptr;
	}

}


