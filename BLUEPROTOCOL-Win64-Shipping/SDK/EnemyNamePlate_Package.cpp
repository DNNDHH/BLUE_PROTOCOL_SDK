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
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetCharacter_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetCharacter_Internal(class ASBCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetCharacter_Internal");
		
		UEnemyNamePlate_C_SetCharacter_Internal_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.IsShowBuddyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowBuddyIcon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnemyNamePlate_C::IsShowBuddyIcon(bool* ShowBuddyIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.IsShowBuddyIcon");
		
		UEnemyNamePlate_C_IsShowBuddyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowBuddyIcon != nullptr)
			*ShowBuddyIcon = params.ShowBuddyIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetVisibleCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnemyNamePlate_C::SetVisibleCanvas(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetVisibleCanvas");
		
		UEnemyNamePlate_C_SetVisibleCanvas_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.ResetBuffIcon
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::ResetBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.ResetBuffIcon");
		
		UEnemyNamePlate_C_ResetBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetName");
		
		UEnemyNamePlate_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetLevel");
		
		UEnemyNamePlate_C_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.OnDisplayStart
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::OnDisplayStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.OnDisplayStart");
		
		UEnemyNamePlate_C_OnDisplayStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetColorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEnemyNamePlate_C::SetColorName(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetColorName");
		
		UEnemyNamePlate_C_SetColorName_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetColorLV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEnemyNamePlate_C::SetColorLV(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetColorLV");
		
		UEnemyNamePlate_C_SetColorLV_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetColorText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetColorText(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetColorText");
		
		UEnemyNamePlate_C_SetColorText_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetupBuffIcon
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::SetupBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetupBuffIcon");
		
		UEnemyNamePlate_C_SetupBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.Unbind
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.Unbind");
		
		UEnemyNamePlate_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.Bind
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.Bind");
		
		UEnemyNamePlate_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.BindUIVisibleSettingChange
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::BindUIVisibleSettingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.BindUIVisibleSettingChange");
		
		UEnemyNamePlate_C_BindUIVisibleSettingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.UnbindUIVisibleSettingChange
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::UnbindUIVisibleSettingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.UnbindUIVisibleSettingChange");
		
		UEnemyNamePlate_C_UnbindUIVisibleSettingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnemyNamePlate_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UEnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.Construct
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.Construct");
		
		UEnemyNamePlate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.CustomEvent_1");
		
		UEnemyNamePlate_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetHpRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HPRate                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetHpRate(float HPRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetHpRate");
		
		UEnemyNamePlate_C_SetHpRate_Params params {};
		params.HPRate = HPRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetDepth");
		
		UEnemyNamePlate_C_SetDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEnemyNamePlate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.Destruct");
		
		UEnemyNamePlate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.SetScreenPositionOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InScreenPositionOffset                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.SetScreenPositionOffset");
		
		UEnemyNamePlate_C_SetScreenPositionOffset_Params params {};
		params.InScreenPositionOffset = InScreenPositionOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnemyNamePlate.EnemyNamePlate_C.ExecuteUbergraph_EnemyNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnemyNamePlate_C::ExecuteUbergraph_EnemyNamePlate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyNamePlate.EnemyNamePlate_C.ExecuteUbergraph_EnemyNamePlate");
		
		UEnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnemyNamePlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnemyNamePlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EnemyNamePlate.EnemyNamePlate_C");
		return ptr;
	}

}


