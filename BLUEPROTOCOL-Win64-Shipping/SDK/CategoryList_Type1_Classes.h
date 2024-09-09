#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass CategoryList_Type1.CategoryList_Type1_C
	 * Size -> 0x0140 (FullSize[0x03F0] - InheritedSize[0x02B0])
	 */
	class UCategoryList_Type1_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        CategoryList;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryList_Type1_Group_C*                         CategoryList_Type1_Group;                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Frame;                                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_List;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<int32_t>                                            IDList;                                                  // 0x02D8(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      NameList;                                                // 0x02E8(0x0010) Edit, BlueprintVisible
		int32_t                                                    SelectedCategoryListIndex;                               // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FCQ6[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CategoryChanged;                                         // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class FString, class UCategoryList_Type1_Group_C*>    GroupMap;                                                // 0x0310(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class FString, class FString>                         GroupNameList;                                           // 0x0360(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      GroupList;                                               // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UCategoryList_Type1_Item_C*>                  ItemWidgetList;                                          // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       AlwaysShowScrollbar;                                     // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E8X0[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           FrameSize;                                               // 0x03D4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsColorChange;                                           // 0x03DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_33ES[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ColorChangeIndexList;                                    // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetScrollBottomOffset(float Offset);
		void SetColorChange(bool IsColorChange);
		void SetEnableAllNewIconEx(bool InIsActive);
		void SetNewIconEx(bool InIsActive, int32_t LargeCategoryId, int32_t MediumCategoryId);
		void MakeGroupWidget(const class FString& GroupName, const class FString& Text, int32_t Index);
		void AddGroupList(const class FString& Group, int32_t ID, const class FString& Name);
		void AddGroup(const class FString& GroupName, const class FString& Text);
		void SetScrollOffset(float Offset);
		void GetScrollOffset(float* Offset);
		void CheckListNewIconVisible(bool* Result);
		int32_t GetIndex(int32_t ID);
		void SetNewIconAll(bool IsActive);
		void SetNewIcon(int32_t CategoryIndex, bool IsActive);
		void AddCategoryList(int32_t ID, const class FString& Name);
		void GetSelectedCategoryListIndex(int32_t* SelectedCategoryListIndex);
		void GetSelectedId(int32_t* Output);
		void SetCategoryListSelected(int32_t InListIndex, bool bSelected);
		void PreConstruct(bool IsDesignTime);
		void CreateList();
		void ClickListItem(int32_t listIndex);
		void UpdateClickListItem(int32_t listIndex);
		void UnSelectListItem();
		void ExecuteUbergraph_CategoryList_Type1(int32_t EntryPoint);
		void CategoryChanged__DelegateSignature(int32_t ItemIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
