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
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotifyScreenshot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.Construct");
		
		UNotifyScreenshot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.AddNotifyMessageItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.AddNotifyMessageItem");
		
		UNotifyScreenshot_C_AddNotifyMessageItem_Params params {};
		params.Widget = Widget;
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.Tick");
		
		UNotifyScreenshot_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.AddScreenshotCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::AddScreenshotCaptured(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.AddScreenshotCaptured");
		
		UNotifyScreenshot_C_AddScreenshotCaptured_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.OnScreenshotCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::OnScreenshotCaptured(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.OnScreenshotCaptured");
		
		UNotifyScreenshot_C_OnScreenshotCaptured_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.PrepareScreens
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::PrepareScreens(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.PrepareScreens");
		
		UNotifyScreenshot_C_PrepareScreens_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.FinishScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::FinishScreenshot(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.FinishScreenshot");
		
		UNotifyScreenshot_C_FinishScreenshot_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyScreenshot.NotifyScreenshot_C.ExecuteUbergraph_NotifyScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyScreenshot_C::ExecuteUbergraph_NotifyScreenshot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyScreenshot.NotifyScreenshot_C.ExecuteUbergraph_NotifyScreenshot");
		
		UNotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotifyScreenshot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotifyScreenshot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifyScreenshot.NotifyScreenshot_C");
		return ptr;
	}

}


