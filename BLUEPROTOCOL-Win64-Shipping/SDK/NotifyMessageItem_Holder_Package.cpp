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
	 * 		Name   -> Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.GetAnimatedPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotifyMessageItem_Holder_C::GetAnimatedPosition(struct FMargin* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.GetAnimatedPosition");
		
		UNotifyMessageItem_Holder_C_GetAnimatedPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.SetContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_Holder_C::SetContent(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.SetContent");
		
		UNotifyMessageItem_Holder_C_SetContent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.Start
	 * 		Flags  -> ()
	 */
	void UNotifyMessageItem_Holder_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.Start");
		
		UNotifyMessageItem_Holder_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_Holder_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnAnimationFinished");
		
		UNotifyMessageItem_Holder_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.ExecuteUbergraph_NotifyMessageItem_Holder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_Holder_C::ExecuteUbergraph_NotifyMessageItem_Holder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.ExecuteUbergraph_NotifyMessageItem_Holder");
		
		UNotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNotifyMessageItem_Holder_C::OnFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnFinished__DelegateSignature");
		
		UNotifyMessageItem_Holder_C_OnFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotifyMessageItem_Holder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotifyMessageItem_Holder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifyMessageItem_Holder.NotifyMessageItem_Holder_C");
		return ptr;
	}

}


