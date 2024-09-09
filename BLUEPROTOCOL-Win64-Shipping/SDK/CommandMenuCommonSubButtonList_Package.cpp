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
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Button Abort Anim and Collapse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InButtonId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::SetButtonAbortAnimandCollapse(int32_t InButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Button Abort Anim and Collapse");
		
		UCommandMenuCommonSubButtonList_C_SetButtonAbortAnimandCollapse_Params params {};
		params.InButtonId = InButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Bookmark Array Enable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              BookmarkNameList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommandMenuCommonSubButtonList_C::SetBookmarkArrayEnable(TArray<class FString>* BookmarkNameList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Bookmark Array Enable");
		
		UCommandMenuCommonSubButtonList_C_SetBookmarkArrayEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BookmarkNameList != nullptr)
			*BookmarkNameList = params.BookmarkNameList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetBookmarkEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InButtonId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButtonList_C::SetBookmarkEnable(int32_t InButtonId, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetBookmarkEnable");
		
		UCommandMenuCommonSubButtonList_C_SetBookmarkEnable_Params params {};
		params.InButtonId = InButtonId;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ListId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::SetButtonText(int32_t ListId, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonText");
		
		UCommandMenuCommonSubButtonList_C_SetButtonText_Params params {};
		params.ListId = ListId;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExcramationIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButtonList_C::ExcramationIconVisible(int32_t ButtonId, bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExcramationIconVisible");
		
		UCommandMenuCommonSubButtonList_C_ExcramationIconVisible_Params params {};
		params.ButtonId = ButtonId;
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.InAnimation
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::InAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.InAnimation");
		
		UCommandMenuCommonSubButtonList_C_InAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PurgeButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::PurgeButton(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PurgeButton");
		
		UCommandMenuCommonSubButtonList_C_PurgeButton_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetUIBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButtonList_C::SetUIBlock(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetUIBlock");
		
		UCommandMenuCommonSubButtonList_C_SetUIBlock_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InButtonId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsButtonEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButtonList_C::SetButtonEnable(int32_t InButtonId, bool IsButtonEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonEnable");
		
		UCommandMenuCommonSubButtonList_C_SetButtonEnable_Params params {};
		params.InButtonId = InButtonId;
		params.IsButtonEnable = IsButtonEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ChangeFocusButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFocusButtonId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSyncCursorPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButtonList_C::ChangeFocusButton(int32_t InFocusButtonId, bool bSyncCursorPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ChangeFocusButton");
		
		UCommandMenuCommonSubButtonList_C_ChangeFocusButton_Params params {};
		params.InFocusButtonId = InFocusButtonId;
		params.bSyncCursorPosition = bSyncCursorPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButtonList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PreConstruct");
		
		UCommandMenuCommonSubButtonList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Construct");
		
		UCommandMenuCommonSubButtonList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Tick");
		
		UCommandMenuCommonSubButtonList_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CommandMenuCommonSubButton_OnClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::CommandMenuCommonSubButton_OnClick(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CommandMenuCommonSubButton_OnClick");
		
		UCommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::OnClick_Event_1(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick_Event_1");
		
		UCommandMenuCommonSubButtonList_C_OnClick_Event_1_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Alpha_Renew2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                TextIdNameList                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommandMenuCommonSubButtonList_C::Alpha_Renew2(TArray<class FName> TextIdNameList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Alpha_Renew2");
		
		UCommandMenuCommonSubButtonList_C_Alpha_Renew2_Params params {};
		params.TextIdNameList = TextIdNameList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Destruct");
		
		UCommandMenuCommonSubButtonList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.LRVisibleUpdeta
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::LRVisibleUpdeta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.LRVisibleUpdeta");
		
		UCommandMenuCommonSubButtonList_C_LRVisibleUpdeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Bind
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Bind");
		
		UCommandMenuCommonSubButtonList_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::CustomEvent_1(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CustomEvent_1");
		
		UCommandMenuCommonSubButtonList_C_CustomEvent_1_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CustomEvent_2");
		
		UCommandMenuCommonSubButtonList_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Unbind
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButtonList_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Unbind");
		
		UCommandMenuCommonSubButtonList_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExecuteUbergraph_CommandMenuCommonSubButtonList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::ExecuteUbergraph_CommandMenuCommonSubButtonList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExecuteUbergraph_CommandMenuCommonSubButtonList");
		
		UCommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButtonList_C::OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick__DelegateSignature");
		
		UCommandMenuCommonSubButtonList_C_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenuCommonSubButtonList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenuCommonSubButtonList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C");
		return ptr;
	}

}


