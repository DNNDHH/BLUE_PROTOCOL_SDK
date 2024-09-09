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
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Play Anim Login Bonus List In
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::PlayAnimLoginBonusListIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Play Anim Login Bonus List In");
		
		ULibraryMenu_LoginBonusList_C_PlayAnimLoginBonusListIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.UpdateBannerViewIndex
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::UpdateBannerViewIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.UpdateBannerViewIndex");
		
		ULibraryMenu_LoginBonusList_C_UpdateBannerViewIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::SetBannerTexture(int32_t Index, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerTexture");
		
		ULibraryMenu_LoginBonusList_C_SetBannerTexture_Params params {};
		params.Index = Index;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerViewIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ViewIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::SetBannerViewIndex(int32_t ViewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerViewIndex");
		
		ULibraryMenu_LoginBonusList_C_SetBannerViewIndex_Params params {};
		params.ViewIndex = ViewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBLoginBonusWindowData>             DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_LoginBonusList_C::SetBannerData(TArray<struct FSBLoginBonusWindowData>* DataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerData");
		
		ULibraryMenu_LoginBonusList_C_SetBannerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataList != nullptr)
			*DataList = params.DataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2DDynamic*                           TextureData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::SetBannerImage(int32_t Index, class UTexture2DDynamic* TextureData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerImage");
		
		ULibraryMenu_LoginBonusList_C_SetBannerImage_Params params {};
		params.Index = Index;
		params.TextureData = TextureData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetupMouseClickEvent
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::SetupMouseClickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetupMouseClickEvent");
		
		ULibraryMenu_LoginBonusList_C_SetupMouseClickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLoginBonusWindowData                     DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               MouseClick                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_LoginBonusList_C::SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetData");
		
		ULibraryMenu_LoginBonusList_C_SetData_Params params {};
		params.DataList = DataList;
		params.MouseClick = MouseClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Initialize
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Initialize");
		
		ULibraryMenu_LoginBonusList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Finish
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Finish");
		
		ULibraryMenu_LoginBonusList_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnImageLoadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_LoginBonusList_C::OnImageLoadComplete(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnImageLoadComplete");
		
		ULibraryMenu_LoginBonusList_C_OnImageLoadComplete_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Construct");
		
		ULibraryMenu_LoginBonusList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListItemClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::OnListItemClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListItemClick");
		
		ULibraryMenu_LoginBonusList_C_OnListItemClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_LoginBonusList_C_BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_LoginBonusList_C_BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnBannerClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULibraryMenu_LoginBonus_BannerImage_C*       SelectedBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::OnBannerClicked(int32_t ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnBannerClicked");
		
		ULibraryMenu_LoginBonusList_C_OnBannerClicked_Params params {};
		params.ID = ID;
		params.SelectedBtn = SelectedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ExecuteUbergraph_LibraryMenu_LoginBonusList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::ExecuteUbergraph_LibraryMenu_LoginBonusList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ExecuteUbergraph_LibraryMenu_LoginBonusList");
		
		ULibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BannerClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::BannerClick__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BannerClick__DelegateSignature");
		
		ULibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ListItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusList_C::ListItemClick__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ListItemClick__DelegateSignature");
		
		ULibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListInitComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusList_C::OnListInitComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListInitComplete__DelegateSignature");
		
		ULibraryMenu_LoginBonusList_C_OnListInitComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_LoginBonusList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_LoginBonusList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C");
		return ptr;
	}

}


