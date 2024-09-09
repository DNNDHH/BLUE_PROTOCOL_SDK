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
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.CheckDistanceLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcBalloonWindow_C::CheckDistanceLimit(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.CheckDistanceLimit");
		
		UNpcBalloonWindow_C_CheckDistanceLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.GetBasePosition
	 * 		Flags  -> ()
	 */
	struct FVector UNpcBalloonWindow_C::GetBasePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.GetBasePosition");
		
		UNpcBalloonWindow_C_GetBasePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.AdjustPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector2D UNpcBalloonWindow_C::AdjustPosition(const struct FVector2D& Position, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.AdjustPosition");
		
		UNpcBalloonWindow_C_AdjustPosition_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcBalloonWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.Tick");
		
		UNpcBalloonWindow_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ACharacter*                                  AttachCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachTransformName                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AutoCloseTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcBalloonWindow_C::Show(const class FText& Message, class ACharacter* AttachCharacter, const class FName& AttachTransformName, float AutoCloseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.Show");
		
		UNpcBalloonWindow_C_Show_Params params {};
		params.Message = Message;
		params.AttachCharacter = AttachCharacter;
		params.AttachTransformName = AttachTransformName;
		params.AutoCloseTime = AutoCloseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.Hide
	 * 		Flags  -> ()
	 */
	void UNpcBalloonWindow_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.Hide");
		
		UNpcBalloonWindow_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcBalloonWindow_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.OnAnimationFinished");
		
		UNpcBalloonWindow_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UNpcBalloonWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.Construct");
		
		UNpcBalloonWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcBalloonWindow_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UNpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNpcBalloonWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.Destruct");
		
		UNpcBalloonWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.ExecuteUbergraph_NpcBalloonWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcBalloonWindow_C::ExecuteUbergraph_NpcBalloonWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.ExecuteUbergraph_NpcBalloonWindow");
		
		UNpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcBalloonWindow.NpcBalloonWindow_C.OnRemove__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcBalloonWindow_C::OnRemove__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcBalloonWindow.NpcBalloonWindow_C.OnRemove__DelegateSignature");
		
		UNpcBalloonWindow_C_OnRemove__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNpcBalloonWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNpcBalloonWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NpcBalloonWindow.NpcBalloonWindow_C");
		return ptr;
	}

}


