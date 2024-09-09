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
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.SetGatherImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBInteractionTargetComponent*               TargetComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursor_C::SetGatherImage(class USBInteractionTargetComponent* TargetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.SetGatherImage");
		
		UObjectSelectCursor_C_SetGatherImage_Params params {};
		params.TargetComponent = TargetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.Construct
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.Construct");
		
		UObjectSelectCursor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.Tick");
		
		UObjectSelectCursor_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.ChargeUp
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursor_C::ChargeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.ChargeUp");
		
		UObjectSelectCursor_C_ChargeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.Fade In
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursor_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.Fade In");
		
		UObjectSelectCursor_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.Fade Out
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursor_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.Fade Out");
		
		UObjectSelectCursor_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursor_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.OnAnimationFinished");
		
		UObjectSelectCursor_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.SEreset
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursor_C::SEreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.SEreset");
		
		UObjectSelectCursor_C_SEreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.ExecuteUbergraph_ObjectSelectCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursor_C::ExecuteUbergraph_ObjectSelectCursor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.ExecuteUbergraph_ObjectSelectCursor");
		
		UObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursor.ObjectSelectCursor_C.FinishedFade__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFadeIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObjectSelectCursor_C::FinishedFade__DelegateSignature(bool IsFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursor.ObjectSelectCursor_C.FinishedFade__DelegateSignature");
		
		UObjectSelectCursor_C_FinishedFade__DelegateSignature_Params params {};
		params.IsFadeIn = IsFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectSelectCursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectSelectCursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectSelectCursor.ObjectSelectCursor_C");
		return ptr;
	}

}


