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
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply ULibraryMenu_Theater_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.TermRequest");
		
		ULibraryMenu_Theater_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.Check Read Demo Id List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_Theater_C::CheckReadDemoIdList(TArray<class FName>* In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.Check Read Demo Id List");
		
		ULibraryMenu_Theater_C_CheckReadDemoIdList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.InitExclamationIcon
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::InitExclamationIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.InitExclamationIcon");
		
		ULibraryMenu_Theater_C_InitExclamationIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExtractCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Theater_C::ExtractCategory(const class FName& Category, int32_t ID, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExtractCategory");
		
		ULibraryMenu_Theater_C_ExtractCategory_Params params {};
		params.Category = Category;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadAllCategory
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::IsReadAllCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadAllCategory");
		
		ULibraryMenu_Theater_C_IsReadAllCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::IsReadCategory(int32_t CategoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadCategory");
		
		ULibraryMenu_Theater_C_IsReadCategory_Params params {};
		params.CategoryId = CategoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.AddDemoAllList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DemoName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::AddDemoAllList(const class FName& DemoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.AddDemoAllList");
		
		ULibraryMenu_Theater_C_AddDemoAllList_Params params {};
		params.DemoName = DemoName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckViewedDemoId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DemoId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Theater_C::CheckViewedDemoId(const class FName& DemoId, bool* IsOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckViewedDemoId");
		
		ULibraryMenu_Theater_C_CheckViewedDemoId_Params params {};
		params.DemoId = DemoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOk != nullptr)
			*IsOk = params.IsOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.Load Lib Save Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBLibrarySaveManager*                       LibSaveData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::LoadLibSaveData(class USBLibrarySaveManager** LibSaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.Load Lib Save Data");
		
		ULibraryMenu_Theater_C_LoadLibSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LibSaveData != nullptr)
			*LibSaveData = params.LibSaveData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveLibSaveData
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::SaveLibSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveLibSaveData");
		
		ULibraryMenu_Theater_C_SaveLibSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreteGameContentId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        GameContentId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::CreteGameContentId(const class FName& LevelName, class FName* GameContentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreteGameContentId");
		
		ULibraryMenu_Theater_C_CreteGameContentId_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameContentId != nullptr)
			*GameContentId = params.GameContentId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::CreateItemDetail(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemDetail");
		
		ULibraryMenu_Theater_C_CreateItemDetail_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::CreateItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemList");
		
		ULibraryMenu_Theater_C_CreateItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckLevelName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsScript                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDemo                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Theater_C::CheckLevelName(const class FName& Name, bool IsScript, bool* IsDemo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckLevelName");
		
		ULibraryMenu_Theater_C_CheckLevelName_Params params {};
		params.Name = Name;
		params.IsScript = IsScript;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDemo != nullptr)
			*IsDemo = params.IsDemo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.GetDemoTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDemoType                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::GetDemoTypeName(ESBDemoType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.GetDemoTypeName");
		
		ULibraryMenu_Theater_C_GetDemoTypeName_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateCategoryList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::CreateCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateCategoryList");
		
		ULibraryMenu_Theater_C_CreateCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnLoaded_56ABDCA943F8CB39C0C21897E8372530
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::OnLoaded_56ABDCA943F8CB39C0C21897E8372530(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnLoaded_56ABDCA943F8CB39C0C21897E8372530");
		
		ULibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.ResetMouseCursorTypeToDefaultRequest");
		
		ULibraryMenu_Theater_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.Construct");
		
		ULibraryMenu_Theater_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Theater_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
		
		ULibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnClickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::OnClickEvent(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnClickEvent");
		
		ULibraryMenu_Theater_C_OnClickEvent_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSubMenuUpdate");
		
		ULibraryMenu_Theater_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSameMenuBookmarkAccessNew");
		
		ULibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnRMShopClosed");
		
		ULibraryMenu_Theater_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnParentTerm");
		
		ULibraryMenu_Theater_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.Destruct");
		
		ULibraryMenu_Theater_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnEndDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::OnEndDialog(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnEndDialog");
		
		ULibraryMenu_Theater_C_OnEndDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.Initialize
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.Initialize");
		
		ULibraryMenu_Theater_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.LoadThumbnail
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::LoadThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.LoadThumbnail");
		
		ULibraryMenu_Theater_C_LoadThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.Request_SaveDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DemoId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::Request_SaveDemo(const class FName& DemoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.Request_SaveDemo");
		
		ULibraryMenu_Theater_C_Request_SaveDemo_Params params {};
		params.DemoId = DemoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveTheaterSelectedInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ListId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CategoryOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ListOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::SaveTheaterSelectedInfo(int32_t CategoryId, int32_t ListId, float CategoryOffset, float ListOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveTheaterSelectedInfo");
		
		ULibraryMenu_Theater_C_SaveTheaterSelectedInfo_Params params {};
		params.CategoryId = CategoryId;
		params.ListId = ListId;
		params.CategoryOffset = CategoryOffset;
		params.ListOffset = ListOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		ULibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
		
		ULibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.ReleaseUIBlocker
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Theater_C::ReleaseUIBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.ReleaseUIBlocker");
		
		ULibraryMenu_Theater_C_ReleaseUIBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExecuteUbergraph_LibraryMenu_Theater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::ExecuteUbergraph_LibraryMenu_Theater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExecuteUbergraph_LibraryMenu_Theater");
		
		ULibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Theater.LibraryMenu_Theater_C.UpdateNewIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Theater_C::UpdateNewIcon__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Theater.LibraryMenu_Theater_C.UpdateNewIcon__DelegateSignature");
		
		ULibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Theater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Theater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Theater.LibraryMenu_Theater_C");
		return ptr;
	}

}


