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
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.IsItemBoxGenderCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWarning                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::IsItemBoxGenderCheck(int32_t ItemId, bool* IsWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.IsItemBoxGenderCheck");
		
		UWBP_ItemBox_C_IsItemBoxGenderCheck_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWarning != nullptr)
			*IsWarning = params.IsWarning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num_Random
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWBP_ItemBoxIcon_C*>                  NewLocalVar_01                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		int32_t                                            Cnt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::GetItemNum_Random(TArray<class UWBP_ItemBoxIcon_C*>* NewLocalVar_01, int32_t Cnt, int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num_Random");
		
		UWBP_ItemBox_C_GetItemNum_Random_Params params {};
		params.Cnt = Cnt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocalVar_01 != nullptr)
			*NewLocalVar_01 = params.NewLocalVar_01;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.GetAmount_RewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amoun                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::GetAmount_RewardType(ESBRewardItemType Selection, int32_t InId, int32_t* Amoun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.GetAmount_RewardType");
		
		UWBP_ItemBox_C_GetAmount_RewardType_Params params {};
		params.Selection = Selection;
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Amoun != nullptr)
			*Amoun = params.Amoun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Is Select Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelect                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::IsSelectItem(int32_t ID, bool* bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Is Select Item");
		
		UWBP_ItemBox_C_IsSelectItem_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelect != nullptr)
			*bSelect = params.bSelect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWBP_ItemBoxIcon_C*>                  TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		int32_t                                            Nu                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Min1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::GetItemNum(TArray<class UWBP_ItemBoxIcon_C*> TargetArray, int32_t* Nu, int32_t* Max1, int32_t* Min1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num");
		
		UWBP_ItemBox_C_GetItemNum_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Nu != nullptr)
			*Nu = params.Nu;
		if (Max1 != nullptr)
			*Max1 = params.Max1;
		if (Min1 != nullptr)
			*Min1 = params.Min1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Is Overlapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOverlapping                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::IsOverlapping(ESBRewardItemType Selection, int32_t InId, bool* bOverlapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Is Overlapping");
		
		UWBP_ItemBox_C_IsOverlapping_Params params {};
		params.Selection = Selection;
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverlapping != nullptr)
			*bOverlapping = params.bOverlapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.IsAddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBItemBoxContentParam                      SBItemBoxContentParam                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               IsAdd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::IsAddItem(const struct FSBItemBoxContentParam& SBItemBoxContentParam, bool* IsAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.IsAddItem");
		
		UWBP_ItemBox_C_IsAddItem_Params params {};
		params.SBItemBoxContentParam = SBItemBoxContentParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAdd != nullptr)
			*IsAdd = params.IsAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Select List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    SelectedElement                                            (Parm, OutParm)
	 */
	void UWBP_ItemBox_C::GetSelectList(TArray<int32_t>* SelectedElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Select List");
		
		UWBP_ItemBox_C_GetSelectList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedElement != nullptr)
			*SelectedElement = params.SelectedElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Stack Over Sale Over Sale Price
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOver                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OverPlaceMax                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseMin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OverPlaceMin                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WarrantyPrice                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::GetStackOverSaleOverSalePrice(bool* bOver, int32_t* OverPlaceMax, bool* bUseMin, int32_t* OverPlaceMin, int32_t* WarrantyPrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Stack Over Sale Over Sale Price");
		
		UWBP_ItemBox_C_GetStackOverSaleOverSalePrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOver != nullptr)
			*bOver = params.bOver;
		if (OverPlaceMax != nullptr)
			*OverPlaceMax = params.OverPlaceMax;
		if (bUseMin != nullptr)
			*bUseMin = params.bUseMin;
		if (OverPlaceMin != nullptr)
			*OverPlaceMin = params.OverPlaceMin;
		if (WarrantyPrice != nullptr)
			*WarrantyPrice = params.WarrantyPrice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.IsDestinationItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ItemBoxDestinationType                           Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::IsDestinationItem(int32_t ItemId, EItemType ItemType, E_ItemBoxDestinationType Destination, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.IsDestinationItem");
		
		UWBP_ItemBox_C_IsDestinationItem_Params params {};
		params.ItemId = ItemId;
		params.ItemType = ItemType;
		params.Destination = Destination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Add Other Belongings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Over                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanNotLostOther                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Overlapping                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::AddOtherBelongings(bool* Over, bool* CanNotLostOther, bool* Overlapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Add Other Belongings");
		
		UWBP_ItemBox_C_AddOtherBelongings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Over != nullptr)
			*Over = params.Over;
		if (CanNotLostOther != nullptr)
			*CanNotLostOther = params.CanNotLostOther;
		if (Overlapping != nullptr)
			*Overlapping = params.Overlapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Add Item Bag Scroll List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ItemBoxDestinationType                           DestinationType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsOver                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::AddItemBagScrollList(E_ItemBoxDestinationType DestinationType, bool* bIsOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Add Item Bag Scroll List");
		
		UWBP_ItemBox_C_AddItemBagScrollList_Params params {};
		params.DestinationType = DestinationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsOver != nullptr)
			*bIsOver = params.bIsOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Add Item Storage Scroll List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOver                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bISCanNotLost                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::AddItemStorageScrollList(bool* bIsOver, bool* bISCanNotLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Add Item Storage Scroll List");
		
		UWBP_ItemBox_C_AddItemStorageScrollList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsOver != nullptr)
			*bIsOver = params.bIsOver;
		if (bISCanNotLost != nullptr)
			*bISCanNotLost = params.bISCanNotLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Select Other Type List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWBP_ItemBoxIcon_C*>                  ItemList                                                   (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_ItemBox_C::GetSelectOtherTypeList(TArray<class UWBP_ItemBoxIcon_C*>* ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Select Other Type List");
		
		UWBP_ItemBox_C_GetSelectOtherTypeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Select Item Type List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ItemBoxDestinationType                           DestinationType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UWBP_ItemBoxIcon_C*>                  ItemList                                                   (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_ItemBox_C::GetSelectItemTypeList(E_ItemBoxDestinationType DestinationType, TArray<class UWBP_ItemBoxIcon_C*>* ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Select Item Type List");
		
		UWBP_ItemBox_C_GetSelectItemTypeList_Params params {};
		params.DestinationType = DestinationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Get Scroll List Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ItemBoxScrollText_Wrapper_C*            AsWBPItemBoxScrollText                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::GetScrollListItem(class UWBP_ItemBoxScrollText_Wrapper_C** AsWBPItemBoxScrollText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Get Scroll List Item");
		
		UWBP_ItemBox_C_GetScrollListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsWBPItemBoxScrollText != nullptr)
			*AsWBPItemBoxScrollText = params.AsWBPItemBoxScrollText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Construct");
		
		UWBP_ItemBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Destruct");
		
		UWBP_ItemBox_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.HideDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayCloseSe                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::HideDialog(bool bPlayCloseSe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.HideDialog");
		
		UWBP_ItemBox_C_HideDialog_Params params {};
		params.bPlayCloseSe = bPlayCloseSe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.OnPress_Cancel");
		
		UWBP_ItemBox_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.OnAnimationFinished");
		
		UWBP_ItemBox_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.OnDestructMainWidget
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::OnDestructMainWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.OnDestructMainWidget");
		
		UWBP_ItemBox_C_OnDestructMainWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.ItemIconSetting
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::ItemIconSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.ItemIconSetting");
		
		UWBP_ItemBox_C_ItemIconSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ItemBoxIcon_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::CustomEvent_1(class UWBP_ItemBoxIcon_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_1");
		
		UWBP_ItemBox_C_CustomEvent_1_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.DataInitialize
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::DataInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.DataInitialize");
		
		UWBP_ItemBox_C_DataInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.ItemSetting
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::ItemSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.ItemSetting");
		
		UWBP_ItemBox_C_ItemSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.SetSelectButtonNumAndGray
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::SetSelectButtonNumAndGray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.SetSelectButtonNumAndGray");
		
		UWBP_ItemBox_C_SetSelectButtonNumAndGray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.UpdateList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.UpdateList");
		
		UWBP_ItemBox_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.CreateAllGetList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::CreateAllGetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.CreateAllGetList");
		
		UWBP_ItemBox_C_CreateAllGetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.CreateRandomGetList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::CreateRandomGetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.CreateRandomGetList");
		
		UWBP_ItemBox_C_CreateRandomGetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.ScrollListReset
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::ScrollListReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.ScrollListReset");
		
		UWBP_ItemBox_C_ScrollListReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.UpdateStackOverCheck
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::UpdateStackOverCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.UpdateStackOverCheck");
		
		UWBP_ItemBox_C_UpdateStackOverCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.UpdateOKButton
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::UpdateOKButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.UpdateOKButton");
		
		UWBP_ItemBox_C_UpdateOKButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.UpdateEquipmentWarning
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::UpdateEquipmentWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.UpdateEquipmentWarning");
		
		UWBP_ItemBox_C_UpdateEquipmentWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectGetList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::CreateSelectGetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectGetList");
		
		UWBP_ItemBox_C_CreateSelectGetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.IconAllSelect
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::IconAllSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.IconAllSelect");
		
		UWBP_ItemBox_C_IconAllSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectItemScrollList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::CreateSelectItemScrollList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectItemScrollList");
		
		UWBP_ItemBox_C_CreateSelectItemScrollList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.UpdateSelectNum
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::UpdateSelectNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.UpdateSelectNum");
		
		UWBP_ItemBox_C_UpdateSelectNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBox_C::BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.InitData
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::InitData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.InitData");
		
		UWBP_ItemBox_C_InitData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.RequestAchievement
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::RequestAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.RequestAchievement");
		
		UWBP_ItemBox_C_RequestAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBAchievementInfo>                  AchievementList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ItemBox_C::CustomEvent_2(bool Result, TArray<struct FSBAchievementInfo> AchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_2");
		
		UWBP_ItemBox_C_CustomEvent_2_Params params {};
		params.Result = Result;
		params.AchievementList = AchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.OnGetCryptocurrency_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCryptoCurrency                           Cryptocurrency                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_ItemBox_C::OnGetCryptocurrency_Event(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.OnGetCryptocurrency_Event");
		
		UWBP_ItemBox_C_OnGetCryptocurrency_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.Cryptocurrency = Cryptocurrency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.RequestGetCryptocurrency
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::RequestGetCryptocurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.RequestGetCryptocurrency");
		
		UWBP_ItemBox_C_RequestGetCryptocurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestAdd
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::LoadRequestAdd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestAdd");
		
		UWBP_ItemBox_C_LoadRequestAdd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestRemove
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::LoadRequestRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestRemove");
		
		UWBP_ItemBox_C_LoadRequestRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.Start
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.Start");
		
		UWBP_ItemBox_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBox_C::BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature");
		
		UWBP_ItemBox_C_BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.ExecuteUbergraph_WBP_ItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::ExecuteUbergraph_WBP_ItemBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.ExecuteUbergraph_WBP_ItemBox");
		
		UWBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBox.WBP_ItemBox_C.OnEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ItemBox_C*                              ItemBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBox_C::OnEnd__DelegateSignature(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBox.WBP_ItemBox_C.OnEnd__DelegateSignature");
		
		UWBP_ItemBox_C_OnEnd__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		params.ItemBox = ItemBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBox.WBP_ItemBox_C");
		return ptr;
	}

}


