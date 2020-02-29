# Cambrian Home Augmentation SDK
Implementation is made to be as simple as possible, handling computer vision and rendering tasks under the hood without interaction from the application. The entire core SDK is encapsulated within a single UIView that can be placed within a storyboard.

## Primary components
- View
Holds everything, manages state and lifecycle
- Scene
Holds information about current image/video being edited Assets, lighting, masks, etc
- Asset
Generic parent type for remodeling types. Paint, floor, furniture, etc

## CBRemodelingView
- Parent object of the Cambrian Home Augmentation SDK
- Responsibilities
  - Lifecycle
  - Maintaining state
  - Setting tool modes for interaction
  
## CBRemodelingScene
Container for all information about current image or video being edited Responsibilities:
- Initialization of image/video to be edited
- Storing and modifying assets (paints, floors, furniture, etc) 
- Saving a fully-editable image that can be loaded later Storing and modifying lighting and color temperature

## CBRemodelingPaint
Paint-specific asset object
- A mutable container for paint data, allowing hot-swapping of any paint information while maintaining existing masks, in still or video
- Values:
   - Color
   - Transparency (For stains) Sheen (Gloss level)
   - UserData - for storing any value within the asset, typically ID’s or history
   
For specific example code, follow this link:

[See full documentation](sdk-documentation.pdf)
