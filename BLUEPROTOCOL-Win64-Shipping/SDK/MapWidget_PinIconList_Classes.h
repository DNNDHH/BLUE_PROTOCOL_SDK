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
	 * WidgetBlueprintGeneratedClass MapWidget_PinIconList.MapWidget_PinIconList_C
	 * Size -> 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
	 */
	class UMapWidget_PinIconList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPinIconSelected;                                       // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PinCnt;                                                  // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9K39[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     HorizontalBoxChildsForDelete;                            // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void SetAllPinIconEnable(bool IsEnable, bool InIncludeEraser);
		void SetPinIconEnable(EMapPinType InPinType, bool IsEnable);
		void Construct();
		void PinIconPressed(class UMapWidget_PinIconBtn_C* InPressedIcon);
		void Destruct();
		void OnPinIconBtnPressed(class UMapWidget_PinIconBtn_C* InPressedIcon);
		void OnPinEraserIconBtnPressed(class UMapWidget_PinEraserIconBtn_C* InPressedIcon);
		void EraserIconPressed();
		void ExecuteUbergraph_MapWidget_PinIconList(int32_t EntryPoint);
		void OnPinIconSelected__DelegateSignature(EMapPinType InSelectedPinType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
