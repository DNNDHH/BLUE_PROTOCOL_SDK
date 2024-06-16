#pragma once

 

// Package: CategoryList_Type1

#include "Basic.hpp"

#include "CategoryList_Type1_classes.hpp"
#include "CategoryList_Type1_parameters.hpp"


namespace SDK
{

// Function CategoryList_Type1.CategoryList_Type1_C.CategoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "CategoryChanged__DelegateSignature");

	Params::CategoryList_Type1_C_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.ExecuteUbergraph_CategoryList_Type1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::ExecuteUbergraph_CategoryList_Type1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "ExecuteUbergraph_CategoryList_Type1");

	Params::CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.UnSelectListItem
// (BlueprintCallable, BlueprintEvent)

void UCategoryList_Type1_C::UnSelectListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "UnSelectListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CategoryList_Type1.CategoryList_Type1_C.UpdateClickListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::UpdateClickListItem(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "UpdateClickListItem");

	Params::CategoryList_Type1_C_UpdateClickListItem Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.ClickListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::ClickListItem(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "ClickListItem");

	Params::CategoryList_Type1_C_ClickListItem Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.CreateList
// (BlueprintCallable, BlueprintEvent)

void UCategoryList_Type1_C::CreateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "CreateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CategoryList_Type1.CategoryList_Type1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "PreConstruct");

	Params::CategoryList_Type1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetCategoryListSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::SetCategoryListSelected(int32 InListIndex, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetCategoryListSelected");

	Params::CategoryList_Type1_C_SetCategoryListSelected Parms{};

	Parms.InListIndex = InListIndex;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::GetSelectedID(int32* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "GetSelectedID");

	Params::CategoryList_Type1_C_GetSelectedID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedCategoryListIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SelectedCategoryListIndex                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::GetSelectedCategoryListIndex(int32* Param_SelectedCategoryListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "GetSelectedCategoryListIndex");

	Params::CategoryList_Type1_C_GetSelectedCategoryListIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SelectedCategoryListIndex != nullptr)
		*Param_SelectedCategoryListIndex = Parms.Param_SelectedCategoryListIndex;
}


// Function CategoryList_Type1.CategoryList_Type1_C.AddCategoryList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UCategoryList_Type1_C::AddCategoryList(const int32& ID, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "AddCategoryList");

	Params::CategoryList_Type1_C_AddCategoryList Parms{};

	Parms.ID = ID;
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::SetNewIcon(int32 CategoryIndex, bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetNewIcon");

	Params::CategoryList_Type1_C_SetNewIcon Parms{};

	Parms.CategoryIndex = CategoryIndex;
	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::SetNewIconAll(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetNewIconAll");

	Params::CategoryList_Type1_C_SetNewIconAll Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UCategoryList_Type1_C::GetIndex(const int32& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "GetIndex");

	Params::CategoryList_Type1_C_GetIndex Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CategoryList_Type1.CategoryList_Type1_C.Check List New Icon Visible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::Check_List_New_Icon_Visible(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "Check List New Icon Visible");

	Params::CategoryList_Type1_C_Check_List_New_Icon_Visible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function CategoryList_Type1.CategoryList_Type1_C.GetScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::GetScrollOffset(float* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "GetScrollOffset");

	Params::CategoryList_Type1_C_GetScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = Parms.Offset;
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::SetScrollOffset(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetScrollOffset");

	Params::CategoryList_Type1_C_SetScrollOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.AddGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GroupName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::AddGroup(const class FString& GroupName, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "AddGroup");

	Params::CategoryList_Type1_C_AddGroup Parms{};

	Parms.GroupName = std::move(GroupName);
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.AddGroupList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Group                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::AddGroupList(const class FString& Group, int32 ID, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "AddGroupList");

	Params::CategoryList_Type1_C_AddGroupList Parms{};

	Parms.Group = std::move(Group);
	Parms.ID = ID;
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.MakeGroupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GroupName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::MakeGroupWidget(const class FString& GroupName, const class FString& Text, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "MakeGroupWidget");

	Params::CategoryList_Type1_C_MakeGroupWidget Parms{};

	Parms.GroupName = std::move(GroupName);
	Parms.Text = std::move(Text);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconEx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   LargeCategoryId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MediumCategoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::SetNewIconEx(bool InIsActive, int32 LargeCategoryId, int32 MediumCategoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetNewIconEx");

	Params::CategoryList_Type1_C_SetNewIconEx Parms{};

	Parms.InIsActive = InIsActive;
	Parms.LargeCategoryId = LargeCategoryId;
	Parms.MediumCategoryId = MediumCategoryId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetEnableAllNewIconEx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::SetEnableAllNewIconEx(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetEnableAllNewIconEx");

	Params::CategoryList_Type1_C_SetEnableAllNewIconEx Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetColorChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsColorChange                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_C::SetColorChange(bool Param_IsColorChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetColorChange");

	Params::CategoryList_Type1_C_SetColorChange Parms{};

	Parms.Param_IsColorChange = Param_IsColorChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1.CategoryList_Type1_C.SetScrollBottomOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_C::SetScrollBottomOffset(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_C", "SetScrollBottomOffset");

	Params::CategoryList_Type1_C_SetScrollBottomOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}

}

