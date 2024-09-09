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
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdateVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogFloatStampIcon_C::UpdateVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdateVisible");
		
		UChatLogFloatStampIcon_C_UpdateVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdatePos
	 * 		Flags  -> ()
	 */
	void UChatLogFloatStampIcon_C::UpdatePos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdatePos");
		
		UChatLogFloatStampIcon_C_UpdatePos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Finish
	 * 		Flags  -> ()
	 */
	void UChatLogFloatStampIcon_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Finish");
		
		UChatLogFloatStampIcon_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.SetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InDeadIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogFloatStampIcon_C::SetStamp(int32_t InStampId, bool InDeadIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.SetStamp");
		
		UChatLogFloatStampIcon_C_SetStamp_Params params {};
		params.InStampId = InStampId;
		params.InDeadIcon = InDeadIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogFloatStampIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Tick");
		
		UChatLogFloatStampIcon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogFloatStampIcon_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.OnAnimationFinished");
		
		UChatLogFloatStampIcon_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.ExecuteUbergraph_ChatLogFloatStampIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogFloatStampIcon_C::ExecuteUbergraph_ChatLogFloatStampIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.ExecuteUbergraph_ChatLogFloatStampIcon");
		
		UChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogFloatStampIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogFloatStampIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogFloatStampIcon.ChatLogFloatStampIcon_C");
		return ptr;
	}

}


