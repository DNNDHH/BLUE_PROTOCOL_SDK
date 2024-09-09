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
	 * WidgetBlueprintGeneratedClass MapWidget_FuncIconList.MapWidget_FuncIconList_C
	 * Size -> 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
	 */
	class UMapWidget_FuncIconList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    FuncIconCnt;                                             // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X5Z7[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFuncIconSelected;                                      // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UWidget*>                                     HorizontalBoxChildsForDelete;                            // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void SetFuncIconVisibility(EMapFuncIconType InFuncIconType, bool IsVisible);
		void SetFuncIconEnable(EMapFuncIconType InFuncIconType, bool IsEnable);
		void Construct();
		void FuncIconPressed(class UMapWidget_FuncIconItem_C* InPressedIcon);
		void OnIconPressedEvent(class UMapWidget_FuncIconItem_C* InPressedIcon);
		void Destruct();
		void ExecuteUbergraph_MapWidget_FuncIconList(int32_t EntryPoint);
		void OnFuncIconSelected__DelegateSignature(EMapFuncIconType InSelectedFuncIconType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
