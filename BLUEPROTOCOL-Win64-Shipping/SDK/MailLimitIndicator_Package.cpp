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
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.Construct");
		
		UMailLimitIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateBookType
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::OnUpdateBookType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateBookType");
		
		UMailLimitIndicator_C_OnUpdateBookType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailLimitIndicator_C::OnUpdateSkin(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateSkin");
		
		UMailLimitIndicator_C_OnUpdateSkin_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.Show
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.Show");
		
		UMailLimitIndicator_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.Hide
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.Hide");
		
		UMailLimitIndicator_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.OnChangeCommandMenuFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailLimitIndicator_C::OnChangeCommandMenuFlag(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.OnChangeCommandMenuFlag");
		
		UMailLimitIndicator_C_OnChangeCommandMenuFlag_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.Destruct");
		
		UMailLimitIndicator_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.ChangeBorderColor
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::ChangeBorderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.ChangeBorderColor");
		
		UMailLimitIndicator_C_ChangeBorderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.UIVisibleSettingChangeDelegates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailLimitIndicator_C::UIVisibleSettingChangeDelegates(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.UIVisibleSettingChangeDelegates");
		
		UMailLimitIndicator_C_UIVisibleSettingChangeDelegates_Params params {};
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
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.UpdateShow
	 * 		Flags  -> ()
	 */
	void UMailLimitIndicator_C::UpdateShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.UpdateShow");
		
		UMailLimitIndicator_C_UpdateShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.OnPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailLimitIndicator_C::OnPhotoMode(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.OnPhotoMode");
		
		UMailLimitIndicator_C_OnPhotoMode_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailLimitIndicator.MailLimitIndicator_C.ExecuteUbergraph_MailLimitIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailLimitIndicator_C::ExecuteUbergraph_MailLimitIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailLimitIndicator.MailLimitIndicator_C.ExecuteUbergraph_MailLimitIndicator");
		
		UMailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMailLimitIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMailLimitIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MailLimitIndicator.MailLimitIndicator_C");
		return ptr;
	}

}


