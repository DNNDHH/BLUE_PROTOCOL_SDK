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
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetScrollBottomOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::SetScrollBottomOffset(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetScrollBottomOffset");
		
		UCategoryList_Type1_C_SetScrollBottomOffset_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetColorChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsColorChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::SetColorChange(bool IsColorChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetColorChange");
		
		UCategoryList_Type1_C_SetColorChange_Params params {};
		params.IsColorChange = IsColorChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetEnableAllNewIconEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::SetEnableAllNewIconEx(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetEnableAllNewIconEx");
		
		UCategoryList_Type1_C_SetEnableAllNewIconEx_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LargeCategoryId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MediumCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::SetNewIconEx(bool InIsActive, int32_t LargeCategoryId, int32_t MediumCategoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconEx");
		
		UCategoryList_Type1_C_SetNewIconEx_Params params {};
		params.InIsActive = InIsActive;
		params.LargeCategoryId = LargeCategoryId;
		params.MediumCategoryId = MediumCategoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.MakeGroupWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GroupName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::MakeGroupWidget(const class FString& GroupName, const class FString& Text, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.MakeGroupWidget");
		
		UCategoryList_Type1_C_MakeGroupWidget_Params params {};
		params.GroupName = GroupName;
		params.Text = Text;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.AddGroupList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::AddGroupList(const class FString& Group, int32_t ID, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.AddGroupList");
		
		UCategoryList_Type1_C_AddGroupList_Params params {};
		params.Group = Group;
		params.ID = ID;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.AddGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GroupName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::AddGroup(const class FString& GroupName, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.AddGroup");
		
		UCategoryList_Type1_C_AddGroup_Params params {};
		params.GroupName = GroupName;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::SetScrollOffset(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetScrollOffset");
		
		UCategoryList_Type1_C_SetScrollOffset_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.GetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::GetScrollOffset(float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.GetScrollOffset");
		
		UCategoryList_Type1_C_GetScrollOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.Check List New Icon Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::CheckListNewIconVisible(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.Check List New Icon Visible");
		
		UCategoryList_Type1_C_CheckListNewIconVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.GetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UCategoryList_Type1_C::GetIndex(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.GetIndex");
		
		UCategoryList_Type1_C_GetIndex_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::SetNewIconAll(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconAll");
		
		UCategoryList_Type1_C_SetNewIconAll_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::SetNewIcon(int32_t CategoryIndex, bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetNewIcon");
		
		UCategoryList_Type1_C_SetNewIcon_Params params {};
		params.CategoryIndex = CategoryIndex;
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.AddCategoryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::AddCategoryList(int32_t ID, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.AddCategoryList");
		
		UCategoryList_Type1_C_AddCategoryList_Params params {};
		params.ID = ID;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedCategoryListIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedCategoryListIndex                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::GetSelectedCategoryListIndex(int32_t* SelectedCategoryListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedCategoryListIndex");
		
		UCategoryList_Type1_C_GetSelectedCategoryListIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedCategoryListIndex != nullptr)
			*SelectedCategoryListIndex = params.SelectedCategoryListIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::GetSelectedId(int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedId");
		
		UCategoryList_Type1_C_GetSelectedId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.SetCategoryListSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InListIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::SetCategoryListSelected(int32_t InListIndex, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.SetCategoryListSelected");
		
		UCategoryList_Type1_C_SetCategoryListSelected_Params params {};
		params.InListIndex = InListIndex;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.PreConstruct");
		
		UCategoryList_Type1_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.CreateList
	 * 		Flags  -> ()
	 */
	void UCategoryList_Type1_C::CreateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.CreateList");
		
		UCategoryList_Type1_C_CreateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.ClickListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::ClickListItem(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.ClickListItem");
		
		UCategoryList_Type1_C_ClickListItem_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.UpdateClickListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::UpdateClickListItem(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.UpdateClickListItem");
		
		UCategoryList_Type1_C_UpdateClickListItem_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.UnSelectListItem
	 * 		Flags  -> ()
	 */
	void UCategoryList_Type1_C::UnSelectListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.UnSelectListItem");
		
		UCategoryList_Type1_C_UnSelectListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.ExecuteUbergraph_CategoryList_Type1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::ExecuteUbergraph_CategoryList_Type1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.ExecuteUbergraph_CategoryList_Type1");
		
		UCategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1.CategoryList_Type1_C.CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_C::CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1.CategoryList_Type1_C.CategoryChanged__DelegateSignature");
		
		UCategoryList_Type1_C_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCategoryList_Type1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCategoryList_Type1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CategoryList_Type1.CategoryList_Type1_C");
		return ptr;
	}

}


